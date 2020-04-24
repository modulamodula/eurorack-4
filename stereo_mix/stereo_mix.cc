#include "drivers/adc.h"
#include "drivers/dac.h"
#include "drivers/leds.h"
#include "drivers/peripherals.h"
#include "drivers/switches.h"
#include "resources.h"
#include "stmlib/ui/event_queue.h"
#include <stm32f0xx_hal.h>

using namespace stereo_mix;
using namespace stmlib;

Dac dacs[8] = {
  { GPIOB, GPIO_PIN_8 }, { GPIOB, GPIO_PIN_9 }, { GPIOB, GPIO_PIN_10 }, { GPIOB, GPIO_PIN_11 },
  { GPIOA, GPIO_PIN_8 }, { GPIOA, GPIO_PIN_9 }, { GPIOA, GPIO_PIN_10 }, { GPIOA, GPIO_PIN_11 }
};
Adc adc;
Leds leds;
Switches switches;

const int32_t kLongPressDuration = 2000;
EventQueue<> queue;
uint32_t press_time[SWITCH_COUNT];
bool ignore_release[SWITCH_COUNT];

bool mute[4];

// Default interrupt handlers.
extern "C" {
void NMI_Handler() { }
void Error_Handler()
{
  while (1)
    ;
}
void HardFault_Handler()
{
  while (1)
    ;
}
void MemManage_Handler()
{
  while (1)
    ;
}
void BusFault_Handler()
{
  while (1)
    ;
}
void UsageFault_Handler()
{
  while (1)
    ;
}
void SVC_Handler() { }
void DebugMon_Handler() { }
void PendSV_Handler() { }

// called every 1ms
void SysTick_Handler()
{
  HAL_IncTick();

  system_clock.Tick();

  switches.Debounce();

  for (size_t i = 0; i < SWITCH_COUNT; i++) {
    if (switches.just_pressed(Switch(i))) {
      queue.AddEvent(CONTROL_SWITCH, i, 0);
      press_time[i] = HAL_GetTick();
      ignore_release[i] = false;
    }
    if (switches.pressed(Switch(i)) && !ignore_release[i]) {
      int32_t pressed_time = HAL_GetTick() - press_time[i];
      if (pressed_time > kLongPressDuration) {
        queue.AddEvent(CONTROL_SWITCH, i, pressed_time);
        ignore_release[i] = true;
      }
    }
    if (switches.released(Switch(i)) && !ignore_release[i]) {
      queue.AddEvent(
          CONTROL_SWITCH,
          i,
          system_clock.milliseconds() - press_time[i] + 1);
      ignore_release[i] = true;
    }
  }
}

void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
  RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

  /** Initializes the CPU, AHB and APB busses clocks
   */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI14 | RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSI14State = RCC_HSI14_ON;
  RCC_OscInitStruct.HSI14CalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL6;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks
   */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
      | RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK) {
    Error_Handler();
  }
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
  adc.OnDMATransferComplete();
}
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim) // called with 1kHz (OPTIMIZE!) the display should get its own spi bus
{
  if (htim != &htim3) {
    return;
  }
  leds.Write();
}
}

void Init(void)
{
  HAL_NVIC_SetPriority(TIM3_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(TIM3_IRQn);
  __HAL_RCC_TIM3_CLK_ENABLE();
  htim3.Init.Prescaler = 14;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 128;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.RepetitionCounter = 0;
  HAL_TIM_Base_Init(&htim3);
  HAL_TIM_Base_Start_IT(&htim3);
  system_clock.Init();
  queue.Init();
}

void WriteOutputs(void)
{
  for (int i = 0; i < 4; i++) {
    uint32_t value_l;
    uint32_t value_r;

    uint16_t pan_pot = adc.value(ADC_GROUP_POT + ADC_CHANNEL_PAN_1 + i) >> (16 - 12); // adc is only 12 bit anyways
    uint16_t vol_pot = adc.value(ADC_GROUP_POT + ADC_CHANNEL_VOL_1 + i) >> (16 - 12);
    int16_t pan_cv = (adc.value(ADC_GROUP_CV + ADC_CHANNEL_PAN_1 + i) - 32768) >> (16 - 12);
    uint16_t vol_cv = adc.value(ADC_GROUP_CV + ADC_CHANNEL_VOL_1 + i) >> (16 - 12);
    int32_t pan = pan_pot + pan_cv;
    int32_t vol = vol_pot + vol_cv;

    if (mute[i])
      vol = 0;

    CONSTRAIN(pan, 0, (1 << 12) - 1);
    CONSTRAIN(vol, 0, (1 << 12) - 1);
    leds.set_intensity(i, vol >> 4);
    value_l = (lut_left_sin_pan[pan] * lut_linear_to_exp[vol]) >> 16;
    value_r = (lut_right_cos_pan[pan] * lut_linear_to_exp[vol]) >> 16;

    dacs[i].Write16(0, value_r);
    dacs[i + 4].Write16(0, value_r);
    dacs[i].Write16(1, value_l);
    dacs[i + 4].Write16(1, value_l);
  }
}

void HandleEvent(void)
{
  while (queue.available()) {
    Event ev = queue.PullEvent();
    switch (ev.control_type) {
    case CONTROL_SWITCH:
      if (ev.data != 0) { // switch released
        mute[ev.control_id] = !mute[ev.control_id];
      }
      break;
    default:
      break;
    }
  }
}

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  __HAL_RCC_SYSCFG_CLK_ENABLE();
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();

  Init();

  while (true) {

    HandleEvent();

    WriteOutputs();
  }
}
