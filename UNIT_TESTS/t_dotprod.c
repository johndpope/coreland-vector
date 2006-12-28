#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct dotprod_test {
  float va[4];
  float vb[4];
  float res;
  unsigned int sz;
};

struct dotprod_test tests[] = {
  /* tools/dotprod_gen.c */
  {
    {0.000000, 0.000000, 0.000000, 0.000000},
    {0.000000, 0.000000, 0.000000, 0.000000},
    0.000000,
    4,
  },
  {
    {-1.086339, 3.376000, 0.000000, 0.000000},
    {5.431262, -1.151707, 0.000000, 0.000000},
    -9.788352,
    2,
  },
  {
    {9.827731, 3.721239, 0.000000, 0.000000},
    {-4.676802, -2.275347, 0.000000, 0.000000},
    -54.429458,
    2,
  },
  {
    {-31.596491, 1.450000, 0.000000, 0.000000},
    {-3.452196, -1.521154, 0.000000, 0.000000},
    106.871618,
    2,
  },
  {
    {2.661458, 5.665992, 0.000000, 0.000000},
    {16.236486, -5.622016, 0.000000, 0.000000},
    11.358435,
    2,
  },
  {
    {0.353598, 16.400000, 0.000000, 0.000000},
    {-0.688372, -4.605817, 0.000000, 0.000000},
    -75.778809,
    2,
  },
  {
    {22.716536, -1.836938, 0.000000, 0.000000},
    {7.220758, -1.358566, 0.000000, 0.000000},
    166.526207,
    2,
  },
  {
    {-16.906250, 2.162123, 0.000000, 0.000000},
    {-3.375886, -19.021740, 0.000000, 0.000000},
    15.946230,
    2,
  },
  {
    {-4.127226, -21.719101, 0.000000, 0.000000},
    {67.392860, 6.691358, 0.000000, 0.000000},
    -423.475871,
    2,
  },
  {
    {-5.607143, 0.555300, 0.000000, 0.000000},
    {-12.532787, -8.820000, 0.000000, 0.000000},
    65.375388,
    2,
  },
  {
    {10.307087, 23.902439, -4.582734, 0.000000},
    {2.451179, -3.480620, 10.332298, 0.000000},
    -105.280971,
    3,
  },
  {
    {-1.870307, -5.914894, 3.995717, 0.000000},
    {1.028361, -0.862385, 4.478000, 0.000000},
    21.070389,
    3,
  },
  {
    {-4.931634, 2.923935, 1.580882, 0.000000},
    {7.165746, 0.825933, -7.800000, 0.000000},
    -45.254744,
    3,
  },
  {
    {-6.383929, -233.727280, 12.075075, 0.000000},
    {0.516556, -5.840580, 5.352371, 0.000000},
    1426.435381,
    3,
  },
  {
    {1.623230, 0.769231, 2.506631, 0.000000},
    {-2.342308, 0.553398, 3.834664, 0.000000},
    6.235676,
    3,
  },
  {
    {-3.091787, 4.179448, -277.200012, 0.000000},
    {-3.488889, 3.731501, 2.710059, 0.000000},
    -724.845918,
    3,
  },
  {
    {397.444458, -0.787368, 8.648241, 0.000000},
    {2.411947, -7.561290, 26.314917, 0.000000},
    1192.146046,
    3,
  },
  {
    {53.310810, 4.741573, 3.549168, 0.000000},
    {-7.431487, 0.421687, -5.282805, 0.000000},
    -412.928702,
    3,
  },
  {
    {5.349057, -0.837264, 2.459054, 0.000000},
    {-3.641860, 2.299505, -3.317029, 0.000000},
    -29.562566,
    3,
  },
  {
    {7.453125, -0.977134, 1.940984, 0.000000},
    {17.606741, 16.397591, -0.511287, 0.000000},
    114.210196,
    3,
  },
  {
    {0.065191, 0.548602, -5.479412, 8.457447},
    {-3.517799, -9.826884, 3.668399, -0.293640},
    -28.204488,
    4,
  },
  {
    {-10.665355, 9.623377, -1.931116, 1.170631},
    {-1.190789, 33.296001, -18.371429, -26.521740},
    337.550363,
    4,
  },
  {
    {-0.625698, 44.792210, -29.626667, 0.810000},
    {1.344468, 5.035539, 4.688088, -22.579365},
    67.529988,
    4,
  },
  {
    {-74.714287, -2.990142, 3.296891, -3.044099},
    {-3.262069, 3.058055, -6.660066, 34.458332},
    107.727066,
    4,
  },
  {
    {-1.414051, -5.712281, -2.015660, -3.179957},
    {-5.170886, -0.331731, -3.476139, 6.453642},
    -4.308756,
    4,
  },
  {
    {-1.866587, -49.757141, -14.032051, -3.089461},
    {3.740338, -4.551219, 5.031332, -5.386712},
    165.516139,
    4,
  },
  {
    {-4.622890, 3.828221, 1.361151, 4.899136},
    {-3.482906, -4.621460, 21.195652, 4.271739},
    48.187431,
    4,
  },
  {
    {14.312925, 4.605344, -7.176744, 1.172941},
    {12.931159, -3.917004, 4.432763, 245.000000},
    422.601355,
    4,
  },
  {
    {3.639775, -5.711929, -6.323596, 5.009029},
    {5.329832, 3.597716, -5.195062, 1.195046},
    37.686983,
    4,
  },
  {
    {2.908278, -4.748268, 7.134933, 14.805555},
    {3.003141, 9.800000, -4.164430, 3.294215},
    -18.739303,
    4,
  },
};

int main()
{
  float res;
  unsigned int ind;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct dotprod_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        res = vec_dotprod4f(tests[ind].va, tests[ind].vb);
        break;
      case 3:
        res = vec_dotprod3f(tests[ind].va, tests[ind].vb);
        break;
      case 2:
        res = vec_dotprod2f(tests[ind].va, tests[ind].vb);
        break;
      default:
        printf("error: ended up in default switch statement\n");
        return 2;
    }

    /* APPROX_MAX_ERROR multiplied because results are likely to be
       larger due to dot product */

    if (!approx_equalf(tests[ind].res, res, APPROX_MAX_ERROR * 10.0)) {
      printf("[%u] res %f != %f\n", ind, tests[ind].res, res);
      return 1;
    }
    printf("[%u] dotprod(va) %f ~ res %f\n", ind, tests[ind].res, res);
  }

  return 0;
} 
