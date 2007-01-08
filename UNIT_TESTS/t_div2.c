#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct div_test {
  float va[4];
  float vb[4];
  float vr[4];
  unsigned int sz;
};

struct div_test tests[] = {
  /* tools/div_gen.c */
  {
    {1.000000, 1.000000, 1.000000, 1.000000},
    {1.000000, 1.000000, 1.000000, 1.000000},
    {1.000000, 1.000000, 1.000000, 1.000000},
    4,
  },
  {
    {-3.643468, -2.326468, 1.000000, 1.000000},
    {2.263674, -5.430588, 1.000000, 1.000000},
    {-1.609537, 0.428401, 1.000000, 1.000000},
    2,
  },
  {
    {5.502041, 8.961538, 1.000000, 1.000000},
    {-0.114350, 4.908741, 1.000000, 1.000000},
    {-48.115887, 1.825629, 1.000000, 1.000000},
    2,
  },
  {
    {-4.023256, -2.509225, 1.000000, 1.000000},
    {10.842105, 32.324677, 1.000000, 1.000000},
    {-0.371077, -0.077626, 1.000000, 1.000000},
    2,
  },
  {
    {-4.581169, 3.632316, 1.000000, 1.000000},
    {-4.463122, -0.414046, 1.000000, 1.000000},
    {1.026449, -8.772732, 1.000000, 1.000000},
    2,
  },
  {
    {-4.399103, 21.616072, 1.000000, 1.000000},
    {0.339755, 1.720730, 1.000000, 1.000000},
    {-12.947876, 12.562149, 1.000000, 1.000000},
    2,
  },
  {
    {-4.641791, 40.775002, 1.000000, 1.000000},
    {-3.895662, -0.460765, 1.000000, 1.000000},
    {1.191528, -88.494217, 1.000000, 1.000000},
    2,
  },
  {
    {-42.166668, -5.047619, 1.000000, 1.000000},
    {1.355780, 24.005377, 1.000000, 1.000000},
    {-31.101409, -0.210270, 1.000000, 1.000000},
    2,
  },
  {
    {12.854546, -0.850410, 1.000000, 1.000000},
    {-2.374276, 2.809471, 1.000000, 1.000000},
    {-5.414091, -0.302694, 1.000000, 1.000000},
    2,
  },
  {
    {5.234750, -15.699605, 1.000000, 1.000000},
    {27.360825, 2.833882, 1.000000, 1.000000},
    {0.191323, -5.539965, 1.000000, 1.000000},
    2,
  },
  {
    {4.062207, -7.638202, 3.144578, 1.000000},
    {1.654255, 4.051771, 50.446808, 1.000000},
    {2.455611, -1.885151, 0.062335, 1.000000},
    3,
  },
  {
    {29.125000, 0.146893, 6.510453, 1.000000},
    {4.991627, -2.768908, -20.965666, 1.000000},
    {5.834771, -0.053051, -0.310529, 1.000000},
    3,
  },
  {
    {-8.205624, 4.751055, 5.246073, 1.000000},
    {4.127438, 3.249721, -2.289308, 1.000000},
    {-1.988067, 1.461988, -2.291554, 1.000000},
    3,
  },
  {
    {-5.761194, 3.114519, 39.871559, 1.000000},
    {7.953782, -9.573249, -6.761550, 1.000000},
    {-0.724334, -0.325336, -5.896808, 1.000000},
    3,
  },
  {
    {6.278894, 13.063560, -1.910628, 1.000000},
    {2.658634, -5.000000, -2.573469, 1.000000},
    {2.361699, -2.612712, 0.742433, 1.000000},
    3,
  },
  {
    {-2.951012, -7.024014, 2.486590, 1.000000},
    {8.860051, -23.638655, -0.748201, 1.000000},
    {-0.333069, 0.297141, -3.323423, 1.000000},
    3,
  },
  {
    {-3.229787, 2.165459, 13.332191, 1.000000},
    {-4.442857, -3.600000, 2.085366, 1.000000},
    {0.726962, -0.601516, 6.393215, 1.000000},
    3,
  },
  {
    {-7.030488, 7.913725, -6.723333, 1.000000},
    {-85.710526, -4.897033, 54.821430, 1.000000},
    {0.082026, -1.616024, -0.122641, 1.000000},
    3,
  },
  {
    {-5.571757, 2.347534, 4.590703, 1.000000},
    {-6.018005, -1.867314, 0.073113, 1.000000},
    {0.925848, -1.257171, 62.788968, 1.000000},
    3,
  },
  {
    {5.457245, -0.125000, 7.480475, 1.000000},
    {2.319813, 8.611413, 8.318182, 1.000000},
    {2.352451, -0.014516, 0.899292, 1.000000},
    3,
  },
  {
    {2.364221, 9.154839, 1.458606, -1.779793},
    {-0.694872, 3.890152, 40.147060, -0.599369},
    {-3.402385, 2.353337, 0.036332, 2.969444},
    4,
  },
  {
    {-11.476584, -0.414322, -5.667251, 21.982456},
    {0.815520, 67.590912, -10.398602, -6.629055},
    {-14.072724, -0.006130, 0.545001, -3.316077},
    4,
  },
  {
    {1.531646, 5.798206, -3.539634, 2.645783},
    {38.068966, 26.664122, 12.966666, 1.588921},
    {0.040233, 0.217453, -0.272980, 1.665144},
    4,
  },
  {
    {-7.765013, 6.408832, -12.746212, -2.412869},
    {-8.428572, -4.835031, 7.712831, 42.471264},
    {0.921273, -1.325500, -1.652598, -0.056812},
    4,
  },
  {
    {-221.000000, -2.257556, 3.297872, -3.408654},
    {-4.281602, 10.219178, 4.223881, 0.645051},
    {51.616195, -0.220914, 0.780768, -5.284315},
    4,
  },
  {
    {6.984293, -15.010811, 17.685715, 10.018726},
    {3.066940, -1.780712, -2.875850, -2.047753},
    {2.277284, 8.429669, -6.149734, -4.892547},
    4,
  },
  {
    {-12.902098, 4.598226, 6.935361, 1.165992},
    {-0.467980, -353.333344, 8.963370, -130.071426},
    {27.569746, -0.013014, 0.773745, -0.008964},
    4,
  },
  {
    {1.310263, 2.445104, 12.159780, -4.759637},
    {-5.117117, -4.562424, -2.513762, -13.498024},
    {-0.256055, -0.535922, -4.837284, 0.352617},
    4,
  },
  {
    {3.568627, 57.678570, -106.523811, 11.842696},
    {0.233967, 5.521472, -20.346939, -1.652495},
    {15.252711, 10.446230, 5.235373, -7.166553},
    4,
  },
  {
    {12.761539, -8.468554, -5.453537, 2.339175},
    {30.261538, 9.830409, -5.256410, -22.700001},
    {0.421708, -0.861465, 1.037502, -0.103047},
    4,
  },
};

int main()
{
  unsigned int ind;
  unsigned int jnd;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct div_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        vec_div4f(tests[ind].va, tests[ind].vb);
        break;
      case 3:
        vec_div3f(tests[ind].va, tests[ind].vb);
        break;
      case 2:
        vec_div2f(tests[ind].va, tests[ind].vb);
        break;
      default:
        printf("error: ended up in default switch statement\n");
        return 2;
    }
    for (jnd = 0; jnd < tests[ind].sz; ++jnd) {
      if (!approx_equalf(tests[ind].vr[jnd],
                         tests[ind].va[jnd], APPROX_MAX_ERROR)) {
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
