#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct norm_test {
  float va[4];
  float vr[4];
  unsigned int sz;
};

struct norm_test tests[] = {
  /* tools/norm_gen.c */
  {
    {0.000000, 0.000000, 0.000000, 0.000000},
    {0.000000, 0.000000, 0.000000, 0.000000},
    4,
  },
  {
    {-2.000000, 17.147058, 0.000000, 0.000000},
    {-0.115853, 0.993266, 0.000000, 0.000000},
    2,
  },
  {
    {6.685950, 5.302977, 0.000000, 0.000000},
    {0.783479, 0.621418, 0.000000, 0.000000},
    2,
  },
  {
    {-10.326284, -2.573046, 0.000000, 0.000000},
    {-0.970331, -0.241782, 0.000000, 0.000000},
    2,
  },
  {
    {2.976521, -25.445946, 0.000000, 0.000000},
    {0.116182, -0.993228, 0.000000, 0.000000},
    2,
  },
  {
    {-6.989899, 4.200264, 0.000000, 0.000000},
    {-0.857151, 0.515066, 0.000000, 0.000000},
    2,
  },
  {
    {-0.053134, -15.560784, 0.000000, 0.000000},
    {-0.003415, -0.999994, 0.000000, 0.000000},
    2,
  },
  {
    {252.176468, 3.137881, 0.000000, 0.000000},
    {0.999923, 0.012442, 0.000000, 0.000000},
    2,
  },
  {
    {29.918604, 0.412151, 0.000000, 0.000000},
    {0.999905, 0.013774, 0.000000, 0.000000},
    2,
  },
  {
    {-17.159836, 32.891090, 0.000000, 0.000000},
    {-0.462550, 0.886593, 0.000000, 0.000000},
    2,
  },
  {
    {245.947372, 3.857143, 5.907743, 0.000000},
    {0.999589, 0.015676, 0.024010, 0.000000},
    3,
  },
  {
    {-5.833333, -2.541953, -3.132931, 0.000000},
    {-0.822457, -0.358397, -0.441720, 0.000000},
    3,
  },
  {
    {-10.225000, -8.141631, -3.195402, 0.000000},
    {-0.759919, -0.605083, -0.237481, 0.000000},
    3,
  },
  {
    {-20.571428, -230.222229, 1.674157, 0.000000},
    {-0.088998, -0.996005, 0.007243, 0.000000},
    3,
  },
  {
    {2.611958, 8.980000, 52.487804, 0.000000},
    {0.048992, 0.168435, 0.984495, 0.000000},
    3,
  },
  {
    {0.077821, 8.327683, -5.532808, 0.000000},
    {0.007783, 0.832900, -0.553368, 0.000000},
    3,
  },
  {
    {-4.388350, -13.705167, 6.241379, 0.000000},
    {-0.279766, -0.873731, 0.397900, 0.000000},
    3,
  },
  {
    {-3.682705, 4.767591, -10.941176, 0.000000},
    {-0.294851, 0.381711, -0.875991, 0.000000},
    3,
  },
  {
    {0.638831, -7.345205, -0.412556, 0.000000},
    {0.086510, -0.994683, -0.055868, 0.000000},
    3,
  },
  {
    {26.254238, -4.455814, 2.290676, 0.000000},
    {0.982274, -0.166710, 0.085703, 0.000000},
    3,
  },
  {
    {-4.153125, -5.267669, -6.480886, -1.165615},
    {-0.441828, -0.560399, -0.689466, -0.124003},
    4,
  },
  {
    {-4.824923, -1.304521, -375.090912, 2.572192},
    {-0.012862, -0.003477, -0.999888, 0.006857},
    4,
  },
  {
    {41.463634, 3.650386, -2.373333, -3.017591},
    {0.991937, 0.087328, -0.056777, -0.072190},
    4,
  },
  {
    {-2.903794, -9.318182, -11.228117, 6.663063},
    {-0.178134, -0.571627, -0.688793, 0.408748},
    4,
  },
  {
    {-2.253165, -2.488117, -9.877493, 5.246032},
    {-0.192957, -0.213078, -0.845890, 0.449261},
    4,
  },
  {
    {4.717315, 4.126984, -2.411832, -0.950938},
    {0.695483, 0.608449, -0.355581, -0.140199},
    4,
  },
  {
    {-3.234552, -6.151117, 4.507936, 5.170068},
    {-0.331249, -0.629933, 0.461656, 0.529464},
    4,
  },
  {
    {27.229507, 0.752577, -3.669231, -29.977942},
    {0.669502, 0.018504, -0.090217, -0.737079},
    4,
  },
  {
    {2.867606, 7.854093, 6.704745, 20.113636},
    {0.125823, 0.344616, 0.294186, 0.882532},
    4,
  },
  {
    {21.988373, -7.285262, -48.285713, 2.430108},
    {0.410158, -0.135895, -0.900693, 0.045330},
    4,
  },
};

int main()
{
  float tmp[4] = {0, 0, 0, 0};
  float mag;
  unsigned int ind;
  unsigned int jnd;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct norm_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        vec_norm4fx(tests[ind].va, tmp);
        break;
      case 3:
        vec_norm3fx(tests[ind].va, tmp);
        break;
      case 2:
        vec_norm2fx(tests[ind].va, tmp);
        break;
      default:
        printf("error: ended up in default switch statement\n");
        return 2;
    }
    mag = 0.0f;
    for (jnd = 0; jnd < tests[ind].sz; ++jnd) {
      if (!approx_equalf(tests[ind].vr[jnd], tmp[jnd], APPROX_MAX_ERROR)) {
        printf("fail: [%u] vr[%u] %f != tmp[%u] %f\n",
                ind, jnd, tests[ind].vr[jnd], jnd, tmp[jnd]);
        return 1;
      }
      mag += (tmp[jnd] * tmp[jnd]);
      printf("[%u] vr[%u] %f ~ tmp[%u] %f\n",
              ind, jnd, tests[ind].vr[jnd], jnd, tmp[jnd]);
    }
    if (ind) {
      if (!approx_equalf(mag, 1.0f, APPROX_MAX_ERROR)) {
        printf("[%u] mag != 1.0f (%f)\n", ind, mag);
        return 1;
      }
    }
    printf("--\n");
  }

  return 0;
} 
