#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct nega_test {
  float va[4];
  float vr[4];
  unsigned int sz;
};

struct nega_test tests[] = {
  /* tools/nega_gen.c */
  {
    {0.000000, 0.000000, 0.000000, 0.000000},
    {-0.000000, -0.000000, -0.000000, -0.000000},
    4,
  },
  {
    {6.308411, 3.231277, 0.000000, 0.000000},
    {-6.308411, -3.231277, -0.000000, -0.000000},
    2,
  },
  {
    {-2.548991, -2.329496, 0.000000, 0.000000},
    {2.548991, 2.329496, -0.000000, -0.000000},
    2,
  },
  {
    {7.363785, -1.118019, 0.000000, 0.000000},
    {-7.363785, 1.118019, -0.000000, -0.000000},
    2,
  },
  {
    {-3.443723, -2.300668, 0.000000, 0.000000},
    {3.443723, 2.300668, -0.000000, -0.000000},
    2,
  },
  {
    {1.262185, -3.934974, 0.000000, 0.000000},
    {-1.262185, 3.934974, -0.000000, -0.000000},
    2,
  },
  {
    {-0.056442, -0.706030, 0.000000, 0.000000},
    {0.056442, 0.706030, -0.000000, -0.000000},
    2,
  },
  {
    {-375.600006, -4.884892, 0.000000, 0.000000},
    {375.600006, 4.884892, -0.000000, -0.000000},
    2,
  },
  {
    {-68.951614, 6.402778, 0.000000, 0.000000},
    {68.951614, -6.402778, -0.000000, -0.000000},
    2,
  },
  {
    {-32.647060, 18.699507, 0.000000, 0.000000},
    {32.647060, -18.699507, -0.000000, -0.000000},
    2,
  },
  {
    {-8.308300, -9.039698, 0.626144, 0.000000},
    {8.308300, 9.039698, -0.626144, -0.000000},
    3,
  },
  {
    {4.375246, -0.170833, -14.500000, 0.000000},
    {-4.375246, 0.170833, 14.500000, -0.000000},
    3,
  },
  {
    {-5.471831, 8.388704, 44.884056, 0.000000},
    {5.471831, -8.388704, -44.884056, -0.000000},
    3,
  },
  {
    {14.050794, 7.908676, -6.368421, 0.000000},
    {-14.050794, -7.908676, 6.368421, -0.000000},
    3,
  },
  {
    {2.420272, 4.377444, -2.836735, 0.000000},
    {-2.420272, -4.377444, 2.836735, -0.000000},
    3,
  },
  {
    {20.915255, -7.259574, -5.926617, 0.000000},
    {-20.915255, 7.259574, 5.926617, -0.000000},
    3,
  },
  {
    {-4.023866, 4.496315, -13.333333, 0.000000},
    {4.023866, -4.496315, 13.333333, -0.000000},
    3,
  },
  {
    {1.683417, 7.368421, -0.119767, 0.000000},
    {-1.683417, -7.368421, 0.119767, -0.000000},
    3,
  },
  {
    {4.232831, 4.173333, 7.229133, 0.000000},
    {-4.232831, -4.173333, -7.229133, -0.000000},
    3,
  },
  {
    {-43.142857, -5.343879, 3.963397, 0.000000},
    {43.142857, 5.343879, -3.963397, -0.000000},
    3,
  },
  {
    {-4.742358, -13.112628, -2.788856, -2.547651},
    {4.742358, 13.112628, 2.788856, 2.547651},
    4,
  },
  {
    {-8.349515, -2.763158, 0.340217, -162.600006},
    {8.349515, 2.763158, -0.340217, 162.600006},
    4,
  },
  {
    {5.199017, 1.768305, -44.828831, -2.203448},
    {-5.199017, -1.768305, 44.828831, 2.203448},
    4,
  },
  {
    {5.083228, 4.160757, 31.020548, 21.201754},
    {-5.083228, -4.160757, -31.020548, -21.201754},
    4,
  },
  {
    {2.441412, 6.700582, 0.091658, -3.447958},
    {-2.441412, -6.700582, -0.091658, 3.447958},
    4,
  },
  {
    {-0.195686, 2.195238, 8.890538, 2.544776},
    {0.195686, -2.195238, -8.890538, -2.544776},
    4,
  },
  {
    {-11.523936, 7.450855, 70.906975, -3.855615},
    {11.523936, -7.450855, -70.906975, 3.855615},
    4,
  },
  {
    {10.201389, 13.809524, -3.690972, -2.734293},
    {-10.201389, -13.809524, 3.690972, 2.734293},
    4,
  },
  {
    {-1.898890, -3.898067, 8.509091, -6.658301},
    {1.898890, 3.898067, -8.509091, 6.658301},
    4,
  },
  {
    {-0.111913, 5.169133, 0.195622, 9.726666},
    {0.111913, -5.169133, -0.195622, -9.726666},
    4,
  },
};

int main()
{
  float tmp[4] = {0, 0, 0, 0};
  unsigned int ind;
  unsigned int jnd;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct nega_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        vec_nega4fx(tests[ind].va, tmp);
        break;
      case 3:
        vec_nega3fx(tests[ind].va, tmp);
        break;
      case 2:
        vec_nega2fx(tests[ind].va, tmp);
        break;
      default:
        printf("error: ended up in default switch statement\n");
        return 2;
    }
    for (jnd = 0; jnd < tests[ind].sz; ++jnd) {
      if (!approx_equalf(tests[ind].vr[jnd], tmp[jnd], APPROX_MAX_ERROR)) {
        printf("fail: [%u] vr[%u] %f != tmp[%u] %f\n",
                ind, jnd, tests[ind].vr[jnd], jnd, tmp[jnd]);
        return 1;
      }
      printf("[%u] vr[%u] %f ~ tmp[%u] %f\n",
              ind, jnd, tests[ind].vr[jnd], jnd, tmp[jnd]);
    }
    printf("--\n");
  }

  return 0;
} 