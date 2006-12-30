#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct multsc_test {
  float va[4];
  float sc;
  float vr[4];
  unsigned int sz;
};

struct multsc_test tests[] = {
  /* tools/multsc_gen.c */
  {
    {0.000000, 0.000000, 0.000000, 0.000000},
    0.000000,
    {0.000000, 0.000000, 0.000000, 0.000000},
    4,
  },
  {
    {-28.541666, 5.186916, 0.000000, 0.000000},
    3.498382,
    {-99.849646, 18.145812, 0.000000, 0.000000},
    2,
  },
  {
    {-7.853890, 5.319805, 0.000000, 0.000000},
    -29.346535,
    {230.484454, -156.117846, -0.000000, -0.000000},
    2,
  },
  {
    {92.615387, -5.853261, 0.000000, 0.000000},
    2.532895,
    {234.585037, -14.825695, 0.000000, 0.000000},
    2,
  },
  {
    {20.182692, 3.804318, 0.000000, 0.000000},
    13.340137,
    {269.239861, 50.750127, 0.000000, 0.000000},
    2,
  },
  {
    {25.591398, -2.087021, 0.000000, 0.000000},
    5.650887,
    {144.614112, -11.793519, 0.000000, 0.000000},
    2,
  },
  {
    {2.591650, -6.277689, 0.000000, 0.000000},
    15.346535,
    {39.772843, -96.340765, 0.000000, 0.000000},
    2,
  },
  {
    {7.280702, 5.636960, 0.000000, 0.000000},
    6.344828,
    {46.194797, 35.765537, 0.000000, 0.000000},
    2,
  },
  {
    {0.038576, 13.281250, 0.000000, 0.000000},
    -59.706898,
    {-2.303233, -792.982236, -0.000000, -0.000000},
    2,
  },
  {
    {0.327990, -12.597701, 0.000000, 0.000000},
    -8.617849,
    {-2.826570, 108.565090, -0.000000, -0.000000},
    2,
  },
  {
    {-2.448555, 6.343648, 8.083333, 0.000000},
    7.142857,
    {-17.489678, 45.311774, 57.738092, 0.000000},
    3,
  },
  {
    {4.149780, -3.216610, 6.285714, 0.000000},
    -4.464912,
    {-18.528403, 14.361884, -28.065163, -0.000000},
    3,
  },
  {
    {-8.406114, -2.944837, -8.863946, 0.000000},
    4.357558,
    {-36.630130, -12.832300, -38.625161, 0.000000},
    3,
  },
  {
    {0.807325, 9.119658, -2.661800, 0.000000},
    5.411960,
    {4.369210, 49.355228, -14.405558, 0.000000},
    3,
  },
  {
    {-3.462611, -1.989726, -37.666668, 0.000000},
    -6.953324,
    {24.076655, 13.835210, 261.908540, -0.000000},
    3,
  },
  {
    {19.260700, 13.692660, -8.205323, 0.000000},
    -4.701691,
    {-90.557855, -64.378653, 38.578892, -0.000000},
    3,
  },
  {
    {-0.148684, -17.192308, 3.801839, 0.000000},
    -0.788462,
    {0.117232, 13.555474, -2.997604, -0.000000},
    3,
  },
  {
    {2.275109, 184.888885, 7.793911, 0.000000},
    -3.916264,
    {-8.909928, -724.073697, -30.523013, -0.000000},
    3,
  },
  {
    {5.869128, 3.636364, -3.354144, 0.000000},
    2.226191,
    {13.065797, 8.095239, -7.466964, 0.000000},
    3,
  },
  {
    {-5.625150, 15.773255, -3.038501, 0.000000},
    -4.751523,
    {26.728026, -74.946978, 14.437504, -0.000000},
    3,
  },
  {
    {4.728604, 1054.750000, 4.786102, -15.921787},
    0.221744,
    {1.048539, 233.884281, 1.061289, -3.530558},
    4,
  },
  {
    {-8.686234, 0.130926, -16.306860, 4.247412},
    3.467066,
    {-30.115747, 0.453927, -56.536957, 14.726058},
    4,
  },
  {
    {12.598820, 50.902439, -2.584233, -1.952703},
    -4.833881,
    {-60.901200, -246.056353, 12.491877, 9.439134},
    4,
  },
  {
    {3.972106, -8.761539, 9.954762, 19.992308},
    3.016105,
    {11.980290, -26.425724, 30.024610, 60.298907},
    4,
  },
  {
    {7.496815, 33.413223, 3.717829, 2.973804},
    -5.025791,
    {-37.677428, -167.927882, -18.685034, -14.945718},
    4,
  },
  {
    {-9.481262, -0.175074, -3.806676, 7.224452},
    3.981839,
    {-37.752857, -0.697117, -15.157569, 28.766605},
    4,
  },
  {
    {-120.050003, -7.619048, 3.517134, 3.014760},
    -4.329670,
    {519.776948, 32.987965, -15.228031, -13.052918},
    4,
  },
  {
    {-2.450753, -0.615385, 0.723060, 3.819048},
    -5.373229,
    {13.168457, 3.306602, -3.885169, -20.520616},
    4,
  },
  {
    {0.162844, 19.255640, -13.819277, -1.231515},
    3.766010,
    {0.613272, 72.516929, -52.043532, -4.637898},
    4,
  },
  {
    {-9.786586, 0.305936, 1.197062, -6.112121},
    0.074169,
    {-0.725859, 0.022691, 0.088785, -0.453329},
    4,
  },
};

int main()
{
  float tmp[4] = {0.0, 0.0, 0.0, 0.0};
  unsigned int ind;
  unsigned int jnd;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct multsc_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        vec_multsc4fx(tests[ind].va, tmp, tests[ind].sc);
        break;
      case 3:
        vec_multsc3fx(tests[ind].va, tmp, tests[ind].sc);
        break;
      case 2:
        vec_multsc2fx(tests[ind].va, tmp, tests[ind].sc);
        break;
      default:
        printf("error: ended up in default switch statement\n");
        return 2;
    }
    for (jnd = 0; jnd < tests[ind].sz; ++jnd) {
      if (!approx_equalf(tests[ind].vr[jnd], tmp[jnd], APPROX_MAX_ERROR)) {
        printf("fail: [%u] vr[%u] %f != tmp[%u] %f\n",
                ind, jnd, tests[ind].vr[jnd], jnd, tmp[jnd]);
      }
      printf("[%u] vr[%u] %f ~ tmp[%u] %f\n",
              ind, jnd, tests[ind].vr[jnd], jnd, tmp[jnd]);
    }
    printf("--\n");
  }

  return 0;
} 