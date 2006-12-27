
#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct sub_test {
  float va[4];
  float vb[4];
  float vr[4];
  unsigned int sz;
};

struct sub_test tests[] = {
  /* tools/sub_gen.c */
  {
    {0.000000, 0.000000, 0.000000, 0.000000},
    {0.000000, 0.000000, 0.000000, 0.000000},
    {0.000000, 0.000000, 0.000000, 0.000000},
    4,
  },
  {
    {4.493562, -76.923080, 0.000000, 0.000000},
    {-10.837399, -9.674699, 0.000000, 0.000000},
    {15.330961, -67.248382, 0.000000, 0.000000},
    2,
  },
  {
    {0.219766, -2.210269, 0.000000, 0.000000},
    {13.660098, -3.120541, 0.000000, 0.000000},
    {-13.440332, 0.910272, 0.000000, 0.000000},
    2,
  },
  {
    {512.888916, 4.239521, 0.000000, 0.000000},
    {7.467787, 7.020000, 0.000000, 0.000000},
    {505.421129, -2.780479, 0.000000, 0.000000},
    2,
  },
  {
    {-4.452489, 1.163415, 0.000000, 0.000000},
    {-82.000000, -5.110656, 0.000000, 0.000000},
    {77.547511, 6.274070, 0.000000, 0.000000},
    2,
  },
  {
    {5.063380, 1.418056, 0.000000, 0.000000},
    {2.825130, -1.499353, 0.000000, 0.000000},
    {2.238251, 2.917409, 0.000000, 0.000000},
    2,
  },
  {
    {-1.239852, 4.185883, 0.000000, 0.000000},
    {-4.191511, -1.584856, 0.000000, 0.000000},
    {2.951659, 5.770739, 0.000000, 0.000000},
    2,
  },
  {
    {-12.346835, 0.287318, 0.000000, 0.000000},
    {1.345771, -1.654412, 0.000000, 0.000000},
    {-13.692606, 1.941729, 0.000000, 0.000000},
    2,
  },
  {
    {1.696880, 40.406250, 0.000000, 0.000000},
    {-8.858657, -2.357860, 0.000000, 0.000000},
    {10.555537, 42.764110, 0.000000, 0.000000},
    2,
  },
  {
    {1.440589, 4.849105, 0.000000, 0.000000},
    {4.761349, 5.709491, 0.000000, 0.000000},
    {-3.320760, -0.860386, 0.000000, 0.000000},
    2,
  },
  {
    {-8.080000, 6.396166, -8.380953, 0.000000},
    {4.245763, 29.007143, 9.573426, 0.000000},
    {-12.325763, -22.610977, -17.954379, 0.000000},
    3,
  },
  {
    {-3.112116, 2.302717, -140.166672, 0.000000},
    {22.248276, -1.083449, -2.511714, 0.000000},
    {-25.360391, 3.386166, -137.654958, 0.000000},
    3,
  },
  {
    {-0.095930, -9.825136, -7.932292, 0.000000},
    {3.480730, 2.082192, 5.313648, 0.000000},
    {-3.576661, -11.907328, -13.245940, 0.000000},
    3,
  },
  {
    {-0.780335, -3.176364, 1.471720, 0.000000},
    {-23.327272, -6.090796, 11.115501, 0.000000},
    {22.546938, 2.914432, -9.643782, 0.000000},
    3,
  },
  {
    {0.926097, 2.838665, 0.100410, 0.000000},
    {3.185649, -0.317105, -25.345551, 0.000000},
    {-2.259552, 3.155770, 25.445960, 0.000000},
    3,
  },
  {
    {9.696667, -1.120510, -1.574913, 0.000000},
    {-4.313384, 44.406979, 6.912541, 0.000000},
    {14.010051, -45.527488, -8.487454, 0.000000},
    3,
  },
  {
    {-2.790524, -16.285715, 9.530666, 0.000000},
    {-14.723550, -0.218391, 4.789474, 0.000000},
    {11.933026, -16.067324, 4.741193, 0.000000},
    3,
  },
  {
    {7.724026, 1.219370, 1.440252, 0.000000},
    {-1.236534, 9.909890, -5.379733, 0.000000},
    {8.960560, -8.690520, 6.819984, 0.000000},
    3,
  },
  {
    {-2.192358, -2.322398, 6.882934, 0.000000},
    {-10.563050, -5.045997, -50.337662, 0.000000},
    {8.370692, 2.723598, 57.220595, 0.000000},
    3,
  },
  {
    {-0.265497, -0.042918, 2.582990, 0.000000},
    {-5.462963, -4.923191, 1.535188, 0.000000},
    {5.197466, 4.880272, 1.047802, 0.000000},
    3,
  },
  {
    {1.148707, 4.667929, 9.727273, -108.159088},
    {-2.209011, -7.665842, 4.219269, -7.416667},
    {3.357718, 12.333771, 5.508004, -100.742422},
    4,
  },
  {
    {-2.670190, 9.619608, -1.210046, -3.838396},
    {7.336245, 12.205323, 1.091220, -5.471509},
    {-10.006435, -2.585715, -2.301266, 1.633112},
    4,
  },
  {
    {-5.038610, 5.977150, -7.424633, -1.061372},
    {6.382609, 6.938111, -3.206117, -1.402017},
    {-11.421219, -0.960960, -4.218516, 0.340645},
    4,
  },
  {
    {-31.493334, 10.829670, 9.323194, 0.953488},
    {-2.807909, -16.171171, 8.385870, 9.064695},
    {-28.685424, 27.000841, 0.937324, -8.111207},
    4,
  },
  {
    {-1.160121, 2.898380, 9.398577, 2.990124},
    {-1.925325, -0.478065, -19.298780, -9.780374},
    {0.765204, 3.376445, 28.697357, 12.770497},
    4,
  },
  {
    {-2.476758, -6.146939, 10.573826, -21.109243},
    {-2.151087, -1.905492, -2.174419, 0.920991},
    {-0.325671, -4.241447, 12.748245, -22.030234},
    4,
  },
  {
    {48.722221, -0.689614, -9.016587, -5.263547},
    {-3.512963, -3.744838, -2.808642, -54.655174},
    {52.235184, 3.055224, -6.207945, 49.391627},
    4,
  },
  {
    {4.278981, -5.385246, 5.345856, -11.361963},
    {-4.804207, 4.659933, -37.750000, -20.700638},
    {9.083188, -10.045178, 43.095856, 9.338675},
    4,
  },
  {
    {-8.346154, 8.106472, 31.371796, -0.409677},
    {14.560976, 5.330827, -2.682028, 2.528868},
    {-22.907130, 2.775645, 34.053823, -2.938546},
    4,
  },
  {
    {-21.240343, 1.701863, 19.418270, -2.988355},
    {-7.449791, 5.181049, -0.260274, -2.182186},
    {-13.790552, -3.479185, 19.678544, -0.806169},
    4,
  },
};

int main()
{
  float tmp[4];
  unsigned int ind;
  unsigned int jnd;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct sub_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        vec_sub4fx(tests[ind].va, tests[ind].vb, tmp);
        break;
      case 3:
        vec_sub3fx(tests[ind].va, tests[ind].vb, tmp);
        break;
      case 2:
        vec_sub2fx(tests[ind].va, tests[ind].vb, tmp);
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
    }
  }

  return 0;
} 
