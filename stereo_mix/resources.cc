// Copyright 2020 Jan-Henrik Bruhn
//
// Author: Jan-Henrik Bruhn (hi@jhbruhn.de)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// See http://creativecommons.org/licenses/MIT/ for more information.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#include "stereo_mix/resources.h"

namespace stereo_mix {

const uint16_t lut_linear_to_exp[] = {
       0,      0,      0,      0,
       0,      0,      0,      0,
       0,      0,      0,      0,
       0,      0,      0,      0,
       1,      1,      1,      1,
       1,      1,      1,      2,
       2,      2,      2,      2,
       3,      3,      3,      3,
       4,      4,      4,      4,
       5,      5,      5,      5,
       6,      6,      6,      7,
       7,      7,      8,      8,
       9,      9,      9,     10,
      10,     10,     11,     11,
      12,     12,     13,     13,
      14,     14,     15,     15,
      16,     16,     17,     17,
      18,     18,     19,     19,
      20,     20,     21,     22,
      22,     23,     23,     24,
      25,     25,     26,     26,
      27,     28,     28,     29,
      30,     31,     31,     32,
      33,     33,     34,     35,
      36,     36,     37,     38,
      39,     39,     40,     41,
      42,     43,     43,     44,
      45,     46,     47,     48,
      49,     49,     50,     51,
      52,     53,     54,     55,
      56,     57,     58,     59,
      60,     61,     62,     63,
      64,     65,     66,     67,
      68,     69,     70,     71,
      72,     73,     74,     75,
      76,     77,     78,     80,
      81,     82,     83,     84,
      85,     86,     88,     89,
      90,     91,     92,     94,
      95,     96,     97,     98,
     100,    101,    102,    103,
     105,    106,    107,    109,
     110,    111,    113,    114,
     115,    117,    118,    119,
     121,    122,    124,    125,
     126,    128,    129,    131,
     132,    133,    135,    136,
     138,    139,    141,    142,
     144,    145,    147,    148,
     150,    151,    153,    154,
     156,    158,    159,    161,
     162,    164,    166,    167,
     169,    170,    172,    174,
     175,    177,    179,    180,
     182,    184,    186,    187,
     189,    191,    192,    194,
     196,    198,    199,    201,
     203,    205,    207,    208,
     210,    212,    214,    216,
     217,    219,    221,    223,
     225,    227,    229,    231,
     233,    234,    236,    238,
     240,    242,    244,    246,
     248,    250,    252,    254,
     256,    258,    260,    262,
     264,    266,    268,    270,
     272,    274,    276,    279,
     281,    283,    285,    287,
     289,    291,    293,    295,
     298,    300,    302,    304,
     306,    309,    311,    313,
     315,    317,    320,    322,
     324,    326,    329,    331,
     333,    336,    338,    340,
     342,    345,    347,    349,
     352,    354,    356,    359,
     361,    364,    366,    368,
     371,    373,    376,    378,
     380,    383,    385,    388,
     390,    393,    395,    398,
     400,    403,    405,    408,
     410,    413,    415,    418,
     421,    423,    426,    428,
     431,    434,    436,    439,
     441,    444,    447,    449,
     452,    455,    457,    460,
     463,    465,    468,    471,
     473,    476,    479,    482,
     484,    487,    490,    493,
     496,    498,    501,    504,
     507,    510,    512,    515,
     518,    521,    524,    527,
     530,    532,    535,    538,
     541,    544,    547,    550,
     553,    556,    559,    562,
     565,    568,    571,    574,
     577,    580,    583,    586,
     589,    592,    595,    598,
     601,    604,    607,    610,
     613,    616,    619,    623,
     626,    629,    632,    635,
     638,    641,    645,    648,
     651,    654,    657,    661,
     664,    667,    670,    674,
     677,    680,    683,    687,
     690,    693,    697,    700,
     703,    706,    710,    713,
     716,    720,    723,    727,
     730,    733,    737,    740,
     744,    747,    750,    754,
     757,    761,    764,    768,
     771,    775,    778,    782,
     785,    789,    792,    796,
     799,    803,    806,    810,
     813,    817,    820,    824,
     828,    831,    835,    839,
     842,    846,    849,    853,
     857,    860,    864,    868,
     871,    875,    879,    883,
     886,    890,    894,    898,
     901,    905,    909,    913,
     916,    920,    924,    928,
     932,    935,    939,    943,
     947,    951,    955,    959,
     962,    966,    970,    974,
     978,    982,    986,    990,
     994,    998,   1002,   1006,
    1010,   1014,   1018,   1021,
    1026,   1030,   1034,   1038,
    1042,   1046,   1050,   1054,
    1058,   1062,   1066,   1070,
    1074,   1078,   1082,   1087,
    1091,   1095,   1099,   1103,
    1107,   1111,   1116,   1120,
    1124,   1128,   1132,   1137,
    1141,   1145,   1149,   1154,
    1158,   1162,   1166,   1171,
    1175,   1179,   1183,   1188,
    1192,   1196,   1201,   1205,
    1209,   1214,   1218,   1223,
    1227,   1231,   1236,   1240,
    1244,   1249,   1253,   1258,
    1262,   1267,   1271,   1276,
    1280,   1285,   1289,   1294,
    1298,   1303,   1307,   1312,
    1316,   1321,   1325,   1330,
    1334,   1339,   1344,   1348,
    1353,   1357,   1362,   1367,
    1371,   1376,   1380,   1385,
    1390,   1394,   1399,   1404,
    1409,   1413,   1418,   1423,
    1427,   1432,   1437,   1442,
    1446,   1451,   1456,   1461,
    1465,   1470,   1475,   1480,
    1485,   1489,   1494,   1499,
    1504,   1509,   1514,   1519,
    1523,   1528,   1533,   1538,
    1543,   1548,   1553,   1558,
    1563,   1568,   1573,   1578,
    1583,   1588,   1593,   1598,
    1603,   1608,   1613,   1618,
    1623,   1628,   1633,   1638,
    1643,   1648,   1653,   1658,
    1663,   1668,   1674,   1679,
    1684,   1689,   1694,   1699,
    1704,   1710,   1715,   1720,
    1725,   1730,   1736,   1741,
    1746,   1751,   1756,   1762,
    1767,   1772,   1777,   1783,
    1788,   1793,   1799,   1804,
    1809,   1815,   1820,   1825,
    1831,   1836,   1841,   1847,
    1852,   1858,   1863,   1868,
    1874,   1879,   1885,   1890,
    1895,   1901,   1906,   1912,
    1917,   1923,   1928,   1934,
    1939,   1945,   1950,   1956,
    1961,   1967,   1972,   1978,
    1984,   1989,   1995,   2000,
    2006,   2012,   2017,   2023,
    2028,   2034,   2040,   2045,
    2051,   2057,   2062,   2068,
    2074,   2080,   2085,   2091,
    2097,   2102,   2108,   2114,
    2120,   2125,   2131,   2137,
    2143,   2149,   2154,   2160,
    2166,   2172,   2178,   2183,
    2189,   2195,   2201,   2207,
    2213,   2219,   2225,   2231,
    2236,   2242,   2248,   2254,
    2260,   2266,   2272,   2278,
    2284,   2290,   2296,   2302,
    2308,   2314,   2320,   2326,
    2332,   2338,   2344,   2350,
    2356,   2362,   2369,   2375,
    2381,   2387,   2393,   2399,
    2405,   2411,   2417,   2424,
    2430,   2436,   2442,   2448,
    2455,   2461,   2467,   2473,
    2479,   2486,   2492,   2498,
    2504,   2511,   2517,   2523,
    2530,   2536,   2542,   2548,
    2555,   2561,   2567,   2574,
    2580,   2586,   2593,   2599,
    2606,   2612,   2618,   2625,
    2631,   2638,   2644,   2650,
    2657,   2663,   2670,   2676,
    2683,   2689,   2696,   2702,
    2709,   2715,   2722,   2728,
    2735,   2741,   2748,   2755,
    2761,   2768,   2774,   2781,
    2788,   2794,   2801,   2807,
    2814,   2821,   2827,   2834,
    2841,   2847,   2854,   2861,
    2867,   2874,   2881,   2887,
    2894,   2901,   2908,   2914,
    2921,   2928,   2935,   2942,
    2948,   2955,   2962,   2969,
    2976,   2982,   2989,   2996,
    3003,   3010,   3017,   3024,
    3030,   3037,   3044,   3051,
    3058,   3065,   3072,   3079,
    3086,   3093,   3100,   3107,
    3114,   3121,   3128,   3135,
    3142,   3149,   3156,   3163,
    3170,   3177,   3184,   3191,
    3198,   3205,   3212,   3219,
    3226,   3233,   3241,   3248,
    3255,   3262,   3269,   3276,
    3283,   3291,   3298,   3305,
    3312,   3319,   3327,   3334,
    3341,   3348,   3356,   3363,
    3370,   3377,   3385,   3392,
    3399,   3406,   3414,   3421,
    3428,   3436,   3443,   3450,
    3458,   3465,   3473,   3480,
    3487,   3495,   3502,   3510,
    3517,   3524,   3532,   3539,
    3547,   3554,   3562,   3569,
    3577,   3584,   3592,   3599,
    3607,   3614,   3622,   3629,
    3637,   3644,   3652,   3659,
    3667,   3674,   3682,   3690,
    3697,   3705,   3713,   3720,
    3728,   3735,   3743,   3751,
    3758,   3766,   3774,   3781,
    3789,   3797,   3805,   3812,
    3820,   3828,   3836,   3843,
    3851,   3859,   3867,   3874,
    3882,   3890,   3898,   3906,
    3913,   3921,   3929,   3937,
    3945,   3953,   3960,   3968,
    3976,   3984,   3992,   4000,
    4008,   4016,   4024,   4032,
    4040,   4048,   4056,   4064,
    4072,   4080,   4087,   4096,
};
const uint16_t lut_left_sin_pan[] = {
       0,      6,     13,     19,
      25,     31,     38,     44,
      50,     57,     63,     69,
      75,     82,     88,     94,
     101,    107,    113,    119,
     126,    132,    138,    145,
     151,    157,    163,    170,
     176,    182,    189,    195,
     201,    207,    214,    220,
     226,    233,    239,    245,
     251,    258,    264,    270,
     277,    283,    289,    295,
     302,    308,    314,    320,
     327,    333,    339,    346,
     352,    358,    364,    371,
     377,    383,    389,    396,
     402,    408,    414,    421,
     427,    433,    439,    446,
     452,    458,    464,    471,
     477,    483,    489,    496,
     502,    508,    514,    521,
     527,    533,    539,    546,
     552,    558,    564,    570,
     577,    583,    589,    595,
     602,    608,    614,    620,
     626,    633,    639,    645,
     651,    658,    664,    670,
     676,    682,    689,    695,
     701,    707,    713,    720,
     726,    732,    738,    744,
     750,    757,    763,    769,
     775,    781,    788,    794,
     800,    806,    812,    818,
     825,    831,    837,    843,
     849,    855,    861,    868,
     874,    880,    886,    892,
     898,    904,    911,    917,
     923,    929,    935,    941,
     947,    953,    960,    966,
     972,    978,    984,    990,
     996,   1002,   1008,   1014,
    1021,   1027,   1033,   1039,
    1045,   1051,   1057,   1063,
    1069,   1075,   1081,   1087,
    1093,   1100,   1106,   1112,
    1118,   1124,   1130,   1136,
    1142,   1148,   1154,   1160,
    1166,   1172,   1178,   1184,
    1190,   1196,   1202,   1208,
    1214,   1220,   1226,   1232,
    1238,   1244,   1250,   1256,
    1262,   1268,   1274,   1280,
    1286,   1292,   1298,   1304,
    1310,   1316,   1322,   1328,
    1334,   1340,   1346,   1352,
    1357,   1363,   1369,   1375,
    1381,   1387,   1393,   1399,
    1405,   1411,   1417,   1423,
    1428,   1434,   1440,   1446,
    1452,   1458,   1464,   1470,
    1476,   1481,   1487,   1493,
    1499,   1505,   1511,   1516,
    1522,   1528,   1534,   1540,
    1546,   1551,   1557,   1563,
    1569,   1575,   1581,   1586,
    1592,   1598,   1604,   1610,
    1615,   1621,   1627,   1633,
    1638,   1644,   1650,   1656,
    1661,   1667,   1673,   1679,
    1684,   1690,   1696,   1702,
    1707,   1713,   1719,   1724,
    1730,   1736,   1741,   1747,
    1753,   1759,   1764,   1770,
    1776,   1781,   1787,   1793,
    1798,   1804,   1809,   1815,
    1821,   1826,   1832,   1838,
    1843,   1849,   1854,   1860,
    1866,   1871,   1877,   1882,
    1888,   1894,   1899,   1905,
    1910,   1916,   1921,   1927,
    1933,   1938,   1944,   1949,
    1955,   1960,   1966,   1971,
    1977,   1982,   1988,   1993,
    1999,   2004,   2010,   2015,
    2021,   2026,   2032,   2037,
    2043,   2048,   2053,   2059,
    2064,   2070,   2075,   2081,
    2086,   2091,   2097,   2102,
    2108,   2113,   2118,   2124,
    2129,   2135,   2140,   2145,
    2151,   2156,   2161,   2167,
    2172,   2177,   2183,   2188,
    2193,   2199,   2204,   2209,
    2214,   2220,   2225,   2230,
    2236,   2241,   2246,   2251,
    2257,   2262,   2267,   2272,
    2278,   2283,   2288,   2293,
    2298,   2304,   2309,   2314,
    2319,   2324,   2330,   2335,
    2340,   2345,   2350,   2355,
    2361,   2366,   2371,   2376,
    2381,   2386,   2391,   2396,
    2401,   2407,   2412,   2417,
    2422,   2427,   2432,   2437,
    2442,   2447,   2452,   2457,
    2462,   2467,   2472,   2477,
    2482,   2487,   2492,   2497,
    2502,   2507,   2512,   2517,
    2522,   2527,   2532,   2537,
    2542,   2547,   2552,   2557,
    2562,   2566,   2571,   2576,
    2581,   2586,   2591,   2596,
    2601,   2605,   2610,   2615,
    2620,   2625,   2630,   2634,
    2639,   2644,   2649,   2654,
    2658,   2663,   2668,   2673,
    2678,   2682,   2687,   2692,
    2697,   2701,   2706,   2711,
    2715,   2720,   2725,   2730,
    2734,   2739,   2744,   2748,
    2753,   2758,   2762,   2767,
    2771,   2776,   2781,   2785,
    2790,   2795,   2799,   2804,
    2808,   2813,   2817,   2822,
    2827,   2831,   2836,   2840,
    2845,   2849,   2854,   2858,
    2863,   2867,   2872,   2876,
    2881,   2885,   2890,   2894,
    2899,   2903,   2907,   2912,
    2916,   2921,   2925,   2929,
    2934,   2938,   2943,   2947,
    2951,   2956,   2960,   2964,
    2969,   2973,   2977,   2982,
    2986,   2990,   2995,   2999,
    3003,   3007,   3012,   3016,
    3020,   3024,   3029,   3033,
    3037,   3041,   3046,   3050,
    3054,   3058,   3062,   3067,
    3071,   3075,   3079,   3083,
    3087,   3091,   3096,   3100,
    3104,   3108,   3112,   3116,
    3120,   3124,   3128,   3132,
    3136,   3140,   3144,   3148,
    3152,   3157,   3161,   3165,
    3168,   3172,   3176,   3180,
    3184,   3188,   3192,   3196,
    3200,   3204,   3208,   3212,
    3216,   3220,   3224,   3227,
    3231,   3235,   3239,   3243,
    3247,   3251,   3254,   3258,
    3262,   3266,   3270,   3273,
    3277,   3281,   3285,   3288,
    3292,   3296,   3300,   3303,
    3307,   3311,   3314,   3318,
    3322,   3326,   3329,   3333,
    3337,   3340,   3344,   3347,
    3351,   3355,   3358,   3362,
    3365,   3369,   3373,   3376,
    3380,   3383,   3387,   3390,
    3394,   3397,   3401,   3404,
    3408,   3411,   3415,   3418,
    3422,   3425,   3429,   3432,
    3436,   3439,   3442,   3446,
    3449,   3453,   3456,   3459,
    3463,   3466,   3469,   3473,
    3476,   3479,   3483,   3486,
    3489,   3493,   3496,   3499,
    3502,   3506,   3509,   3512,
    3515,   3519,   3522,   3525,
    3528,   3531,   3535,   3538,
    3541,   3544,   3547,   3550,
    3554,   3557,   3560,   3563,
    3566,   3569,   3572,   3575,
    3578,   3581,   3584,   3587,
    3590,   3593,   3596,   3599,
    3602,   3605,   3608,   3611,
    3614,   3617,   3620,   3623,
    3626,   3629,   3632,   3635,
    3638,   3641,   3644,   3646,
    3649,   3652,   3655,   3658,
    3661,   3663,   3666,   3669,
    3672,   3675,   3677,   3680,
    3683,   3686,   3688,   3691,
    3694,   3697,   3699,   3702,
    3705,   3707,   3710,   3713,
    3715,   3718,   3721,   3723,
    3726,   3728,   3731,   3734,
    3736,   3739,   3741,   3744,
    3746,   3749,   3752,   3754,
    3757,   3759,   3762,   3764,
    3767,   3769,   3771,   3774,
    3776,   3779,   3781,   3784,
    3786,   3788,   3791,   3793,
    3796,   3798,   3800,   3803,
    3805,   3807,   3810,   3812,
    3814,   3816,   3819,   3821,
    3823,   3826,   3828,   3830,
    3832,   3834,   3837,   3839,
    3841,   3843,   3845,   3848,
    3850,   3852,   3854,   3856,
    3858,   3860,   3862,   3865,
    3867,   3869,   3871,   3873,
    3875,   3877,   3879,   3881,
    3883,   3885,   3887,   3889,
    3891,   3893,   3895,   3897,
    3899,   3901,   3902,   3904,
    3906,   3908,   3910,   3912,
    3914,   3916,   3917,   3919,
    3921,   3923,   3925,   3927,
    3928,   3930,   3932,   3934,
    3935,   3937,   3939,   3941,
    3942,   3944,   3946,   3947,
    3949,   3951,   3952,   3954,
    3956,   3957,   3959,   3960,
    3962,   3964,   3965,   3967,
    3968,   3970,   3971,   3973,
    3975,   3976,   3978,   3979,
    3981,   3982,   3983,   3985,
    3986,   3988,   3989,   3991,
    3992,   3994,   3995,   3996,
    3998,   3999,   4000,   4002,
    4003,   4004,   4006,   4007,
    4008,   4010,   4011,   4012,
    4013,   4015,   4016,   4017,
    4018,   4020,   4021,   4022,
    4023,   4024,   4026,   4027,
    4028,   4029,   4030,   4031,
    4032,   4033,   4034,   4036,
    4037,   4038,   4039,   4040,
    4041,   4042,   4043,   4044,
    4045,   4046,   4047,   4048,
    4049,   4050,   4051,   4052,
    4052,   4053,   4054,   4055,
    4056,   4057,   4058,   4059,
    4060,   4060,   4061,   4062,
    4063,   4064,   4064,   4065,
    4066,   4067,   4067,   4068,
    4069,   4070,   4070,   4071,
    4072,   4072,   4073,   4074,
    4074,   4075,   4076,   4076,
    4077,   4077,   4078,   4079,
    4079,   4080,   4080,   4081,
    4081,   4082,   4082,   4083,
    4083,   4084,   4084,   4085,
    4085,   4086,   4086,   4087,
    4087,   4087,   4088,   4088,
    4089,   4089,   4089,   4090,
    4090,   4090,   4091,   4091,
    4091,   4092,   4092,   4092,
    4092,   4093,   4093,   4093,
    4093,   4094,   4094,   4094,
    4094,   4094,   4095,   4095,
    4095,   4095,   4095,   4095,
    4095,   4096,   4096,   4096,
    4096,   4096,   4096,   4096,
    4096,   4096,   4096,   4096,
};
const uint16_t lut_right_cos_pan[] = {
    4096,   4096,   4096,   4096,
    4096,   4096,   4096,   4096,
    4096,   4096,   4096,   4095,
    4095,   4095,   4095,   4095,
    4095,   4095,   4094,   4094,
    4094,   4094,   4094,   4093,
    4093,   4093,   4093,   4092,
    4092,   4092,   4092,   4091,
    4091,   4091,   4090,   4090,
    4090,   4089,   4089,   4089,
    4088,   4088,   4087,   4087,
    4087,   4086,   4086,   4085,
    4085,   4084,   4084,   4083,
    4083,   4082,   4082,   4081,
    4081,   4080,   4080,   4079,
    4079,   4078,   4077,   4077,
    4076,   4076,   4075,   4074,
    4074,   4073,   4072,   4072,
    4071,   4070,   4070,   4069,
    4068,   4067,   4067,   4066,
    4065,   4064,   4064,   4063,
    4062,   4061,   4060,   4060,
    4059,   4058,   4057,   4056,
    4055,   4054,   4053,   4052,
    4052,   4051,   4050,   4049,
    4048,   4047,   4046,   4045,
    4044,   4043,   4042,   4041,
    4040,   4039,   4038,   4037,
    4036,   4034,   4033,   4032,
    4031,   4030,   4029,   4028,
    4027,   4026,   4024,   4023,
    4022,   4021,   4020,   4018,
    4017,   4016,   4015,   4013,
    4012,   4011,   4010,   4008,
    4007,   4006,   4004,   4003,
    4002,   4000,   3999,   3998,
    3996,   3995,   3994,   3992,
    3991,   3989,   3988,   3986,
    3985,   3983,   3982,   3981,
    3979,   3978,   3976,   3975,
    3973,   3971,   3970,   3968,
    3967,   3965,   3964,   3962,
    3960,   3959,   3957,   3956,
    3954,   3952,   3951,   3949,
    3947,   3946,   3944,   3942,
    3941,   3939,   3937,   3935,
    3934,   3932,   3930,   3928,
    3927,   3925,   3923,   3921,
    3919,   3917,   3916,   3914,
    3912,   3910,   3908,   3906,
    3904,   3902,   3901,   3899,
    3897,   3895,   3893,   3891,
    3889,   3887,   3885,   3883,
    3881,   3879,   3877,   3875,
    3873,   3871,   3869,   3867,
    3865,   3862,   3860,   3858,
    3856,   3854,   3852,   3850,
    3848,   3845,   3843,   3841,
    3839,   3837,   3834,   3832,
    3830,   3828,   3826,   3823,
    3821,   3819,   3816,   3814,
    3812,   3810,   3807,   3805,
    3803,   3800,   3798,   3796,
    3793,   3791,   3788,   3786,
    3784,   3781,   3779,   3776,
    3774,   3771,   3769,   3767,
    3764,   3762,   3759,   3757,
    3754,   3752,   3749,   3746,
    3744,   3741,   3739,   3736,
    3734,   3731,   3728,   3726,
    3723,   3721,   3718,   3715,
    3713,   3710,   3707,   3705,
    3702,   3699,   3697,   3694,
    3691,   3688,   3686,   3683,
    3680,   3677,   3675,   3672,
    3669,   3666,   3663,   3661,
    3658,   3655,   3652,   3649,
    3646,   3644,   3641,   3638,
    3635,   3632,   3629,   3626,
    3623,   3620,   3617,   3614,
    3611,   3608,   3605,   3602,
    3599,   3596,   3593,   3590,
    3587,   3584,   3581,   3578,
    3575,   3572,   3569,   3566,
    3563,   3560,   3557,   3554,
    3550,   3547,   3544,   3541,
    3538,   3535,   3531,   3528,
    3525,   3522,   3519,   3515,
    3512,   3509,   3506,   3502,
    3499,   3496,   3493,   3489,
    3486,   3483,   3479,   3476,
    3473,   3469,   3466,   3463,
    3459,   3456,   3453,   3449,
    3446,   3442,   3439,   3436,
    3432,   3429,   3425,   3422,
    3418,   3415,   3411,   3408,
    3404,   3401,   3397,   3394,
    3390,   3387,   3383,   3380,
    3376,   3373,   3369,   3365,
    3362,   3358,   3355,   3351,
    3347,   3344,   3340,   3337,
    3333,   3329,   3326,   3322,
    3318,   3314,   3311,   3307,
    3303,   3300,   3296,   3292,
    3288,   3285,   3281,   3277,
    3273,   3270,   3266,   3262,
    3258,   3254,   3251,   3247,
    3243,   3239,   3235,   3231,
    3227,   3224,   3220,   3216,
    3212,   3208,   3204,   3200,
    3196,   3192,   3188,   3184,
    3180,   3176,   3172,   3168,
    3165,   3161,   3157,   3152,
    3148,   3144,   3140,   3136,
    3132,   3128,   3124,   3120,
    3116,   3112,   3108,   3104,
    3100,   3096,   3091,   3087,
    3083,   3079,   3075,   3071,
    3067,   3062,   3058,   3054,
    3050,   3046,   3041,   3037,
    3033,   3029,   3024,   3020,
    3016,   3012,   3007,   3003,
    2999,   2995,   2990,   2986,
    2982,   2977,   2973,   2969,
    2964,   2960,   2956,   2951,
    2947,   2943,   2938,   2934,
    2929,   2925,   2921,   2916,
    2912,   2907,   2903,   2899,
    2894,   2890,   2885,   2881,
    2876,   2872,   2867,   2863,
    2858,   2854,   2849,   2845,
    2840,   2836,   2831,   2827,
    2822,   2817,   2813,   2808,
    2804,   2799,   2795,   2790,
    2785,   2781,   2776,   2771,
    2767,   2762,   2758,   2753,
    2748,   2744,   2739,   2734,
    2730,   2725,   2720,   2715,
    2711,   2706,   2701,   2697,
    2692,   2687,   2682,   2678,
    2673,   2668,   2663,   2658,
    2654,   2649,   2644,   2639,
    2634,   2630,   2625,   2620,
    2615,   2610,   2605,   2601,
    2596,   2591,   2586,   2581,
    2576,   2571,   2566,   2562,
    2557,   2552,   2547,   2542,
    2537,   2532,   2527,   2522,
    2517,   2512,   2507,   2502,
    2497,   2492,   2487,   2482,
    2477,   2472,   2467,   2462,
    2457,   2452,   2447,   2442,
    2437,   2432,   2427,   2422,
    2417,   2412,   2407,   2401,
    2396,   2391,   2386,   2381,
    2376,   2371,   2366,   2361,
    2355,   2350,   2345,   2340,
    2335,   2330,   2324,   2319,
    2314,   2309,   2304,   2298,
    2293,   2288,   2283,   2278,
    2272,   2267,   2262,   2257,
    2251,   2246,   2241,   2236,
    2230,   2225,   2220,   2214,
    2209,   2204,   2199,   2193,
    2188,   2183,   2177,   2172,
    2167,   2161,   2156,   2151,
    2145,   2140,   2135,   2129,
    2124,   2118,   2113,   2108,
    2102,   2097,   2091,   2086,
    2081,   2075,   2070,   2064,
    2059,   2053,   2048,   2043,
    2037,   2032,   2026,   2021,
    2015,   2010,   2004,   1999,
    1993,   1988,   1982,   1977,
    1971,   1966,   1960,   1955,
    1949,   1944,   1938,   1933,
    1927,   1921,   1916,   1910,
    1905,   1899,   1894,   1888,
    1882,   1877,   1871,   1866,
    1860,   1854,   1849,   1843,
    1838,   1832,   1826,   1821,
    1815,   1809,   1804,   1798,
    1793,   1787,   1781,   1776,
    1770,   1764,   1759,   1753,
    1747,   1741,   1736,   1730,
    1724,   1719,   1713,   1707,
    1702,   1696,   1690,   1684,
    1679,   1673,   1667,   1661,
    1656,   1650,   1644,   1638,
    1633,   1627,   1621,   1615,
    1610,   1604,   1598,   1592,
    1586,   1581,   1575,   1569,
    1563,   1557,   1551,   1546,
    1540,   1534,   1528,   1522,
    1516,   1511,   1505,   1499,
    1493,   1487,   1481,   1476,
    1470,   1464,   1458,   1452,
    1446,   1440,   1434,   1428,
    1423,   1417,   1411,   1405,
    1399,   1393,   1387,   1381,
    1375,   1369,   1363,   1357,
    1352,   1346,   1340,   1334,
    1328,   1322,   1316,   1310,
    1304,   1298,   1292,   1286,
    1280,   1274,   1268,   1262,
    1256,   1250,   1244,   1238,
    1232,   1226,   1220,   1214,
    1208,   1202,   1196,   1190,
    1184,   1178,   1172,   1166,
    1160,   1154,   1148,   1142,
    1136,   1130,   1124,   1118,
    1112,   1106,   1100,   1093,
    1087,   1081,   1075,   1069,
    1063,   1057,   1051,   1045,
    1039,   1033,   1027,   1021,
    1014,   1008,   1002,    996,
     990,    984,    978,    972,
     966,    960,    953,    947,
     941,    935,    929,    923,
     917,    911,    904,    898,
     892,    886,    880,    874,
     868,    861,    855,    849,
     843,    837,    831,    825,
     818,    812,    806,    800,
     794,    788,    781,    775,
     769,    763,    757,    750,
     744,    738,    732,    726,
     720,    713,    707,    701,
     695,    689,    682,    676,
     670,    664,    658,    651,
     645,    639,    633,    626,
     620,    614,    608,    602,
     595,    589,    583,    577,
     570,    564,    558,    552,
     546,    539,    533,    527,
     521,    514,    508,    502,
     496,    489,    483,    477,
     471,    464,    458,    452,
     446,    439,    433,    427,
     421,    414,    408,    402,
     396,    389,    383,    377,
     371,    364,    358,    352,
     346,    339,    333,    327,
     320,    314,    308,    302,
     295,    289,    283,    277,
     270,    264,    258,    251,
     245,    239,    233,    226,
     220,    214,    207,    201,
     195,    189,    182,    176,
     170,    163,    157,    151,
     145,    138,    132,    126,
     119,    113,    107,    101,
      94,     88,     82,     75,
      69,     63,     57,     50,
      44,     38,     31,     25,
      19,     13,      6,      0,
};


const uint16_t* lookup_table_u16_table[] = {
  lut_linear_to_exp,
  lut_left_sin_pan,
  lut_right_cos_pan,
};


}  // namespace stereo_mix