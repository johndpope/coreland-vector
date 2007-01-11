#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct multsc_test {
  float va[4];
  float vr[4];
  float sc;
  unsigned int sz;
  char align[24];
};

struct multsc_test tests[] = {
  /* tools/multsc_gen.c */
  {
    {0.000000, 0.000000, 0.000000, 0.000000},
    {0.000000, 0.000000, 0.000000, 0.000000},
    0.000000,
    4,
  },
  {
    {-1.617341, 6.520452, 0.000000, 0.000000},
    {45.547177, -183.627419, -0.000000, -0.000000},
    -28.161764,
    2,
  },
  {
    {-2.225434, -18.219828, 0.000000, 0.000000},
    {8.246721, 67.516658, -0.000000, -0.000000},
    -3.705669,
    2,
  },
  {
    {11.593221, -2.909556, 0.000000, 0.000000},
    {-1.698226, 0.426205, -0.000000, -0.000000},
    -0.146484,
    2,
  },
  {
    {18.451128, -4.632509, 0.000000, 0.000000},
    {-99.352228, 24.944278, -0.000000, -0.000000},
    -5.384615,
    2,
  },
  {
    {1.991755, -1.540486, 0.000000, 0.000000},
    {10.165941, -7.862658, 0.000000, 0.000000},
    5.104012,
    2,
  },
  {
    {-5.793956, 2.055556, 0.000000, 0.000000},
    {-27.684741, 9.821877, 0.000000, 0.000000},
    4.778210,
    2,
  },
  {
    {1.333333, -6.204082, 0.000000, 0.000000},
    {11.343225, -52.780719, 0.000000, 0.000000},
    8.507419,
    2,
  },
  {
    {3.916667, -1.354167, 0.000000, 0.000000},
    {4.867314, -1.682848, 0.000000, 0.000000},
    1.242718,
    2,
  },
  {
    {-3.619403, 3.001650, 0.000000, 0.000000},
    {93.146399, -77.248349, -0.000000, -0.000000},
    -25.735294,
    2,
  },
  {
    {-4.349087, -8.712121, -7.212177, 0.000000},
    {-24.786261, -49.652005, -41.103546, 0.000000},
    5.699187,
    3,
  },
  {
    {-3.819756, -2.193680, 77.448273, 0.000000},
    {-16.129912, -9.263384, 327.045484, 0.000000},
    4.222760,
    3,
  },
  {
    {2.976191, 1.001634, 3.063946, 0.000000},
    {-44.549435, -14.993069, -45.863005, -0.000000},
    -14.968610,
    3,
  },
  {
    {11.779703, -21.840000, -0.883996, 0.000000},
    {61.727563, -114.445157, -4.632281, 0.000000},
    5.240163,
    3,
  },
  {
    {-8.010417, 6.834375, 6.432387, 0.000000},
    {-112.117328, 95.656924, 90.030529, 0.000000},
    13.996441,
    3,
  },
  {
    {-43.000000, 1.194030, -5.344226, 0.000000},
    {326.766533, -9.073697, 40.611961, -0.000000},
    -7.599222,
    3,
  },
  {
    {6.503852, 115.333336, 0.498943, 0.000000},
    {20.033167, 355.249791, 1.536844, 0.000000},
    3.080200,
    3,
  },
  {
    {0.476382, -1.221658, -1106.333374, 0.000000},
    {8.389051, -21.513314, -19482.451206, 0.000000},
    17.609928,
    3,
  },
  {
    {-11.803191, 13.334929, -2.544625, 0.000000},
    {9.167527, -10.357226, 1.976408, -0.000000},
    -0.776699,
    3,
  },
  {
    {-8.299781, 0.961175, -1.047745, 0.000000},
    {-19.830173, 2.296479, -2.503316, 0.000000},
    2.389241,
    3,
  },
  {
    {-10.839908, 8.971429, 2.728723, 3.942268},
    {-2858.400415, 2365.696909, 719.543379, 1039.545837},
    263.692322,
    4,
  },
  {
    {-3.326316, -39.605503, 21.172413, -4.397059},
    {-21.328002, -253.946489, 135.755375, -28.193498},
    6.411899,
    4,
  },
  {
    {-5.362126, -6.744856, 4.457462, -5.610493},
    {-30.336957, -38.159937, 25.218695, -31.742124},
    5.657636,
    4,
  },
  {
    {-12.383260, 1.148562, 10.206741, 8.844961},
    {119.386627, -11.073254, -98.402880, -85.273999},
    -9.640969,
    4,
  },
  {
    {-1.412676, 0.827447, -2.655882, -8.831915},
    {0.216797, -0.126984, 0.407586, 1.355393},
    -0.153465,
    4,
  },
  {
    {-0.211982, -9.822967, 7.191304, 3.520362},
    {0.176836, 8.194341, -5.999002, -2.936694},
    -0.834202,
    4,
  },
  {
    {-5.224824, -9.048843, -14.840466, -0.355615},
    {53.800062, 93.176017, 152.812410, 3.661770},
    -10.297009,
    4,
  },
  {
    {-0.975059, -10.196630, 0.598291, -1.131327},
    {21.666150, 226.572563, -13.294220, 25.138467},
    -22.220339,
    4,
  },
  {
    {-3.612500, 3.357532, 4.679206, -3.692308},
    {-443.511789, 412.208982, 574.472803, -453.309901},
    122.771431,
    4,
  },
  {
    {1.303571, -23.026737, 52.000000, -15.314655},
    {3.344457, -59.077648, 133.411766, -39.291446},
    2.565611,
    4,
  },
};

int main()
{
  unsigned int ind;
  unsigned int jnd;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct multsc_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        vec_multsc4f(tests[ind].va, tests[ind].sc);
        break;
      case 3:
        vec_multsc3f(tests[ind].va, tests[ind].sc);
        break;
      case 2:
        vec_multsc2f(tests[ind].va, tests[ind].sc);
        break;
      default:
        printf("error: ended up in default switch statement\n");
        return 2;
    }
    for (jnd = 0; jnd < tests[ind].sz; ++jnd) {
      if (!approx_equalf(tests[ind].vr[jnd],
                         tests[ind].va[jnd], APPROX_MAX_ERROR * 10)) {
        printf("fail: [%u] vr[%u] %f != va[%u] %f\n",
                ind, jnd, tests[ind].vr[jnd], jnd, tests[ind].va[jnd]);
        return 1;
      }
      printf("[%u] vr[%u] %f ~ va[%u] %f\n",
              ind, jnd, tests[ind].vr[jnd], jnd, tests[ind].va[jnd]);
    }
    printf("--\n");
  }

  return 0;
} 
