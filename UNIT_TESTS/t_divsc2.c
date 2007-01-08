#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

struct divsc_test {
  float va[4];
  float sc;
  float vr[4];
  unsigned int sz;
};

struct divsc_test tests[] = {
  /* tools/divsc_gen.c */
  {
    {1.000000, 1.000000, 1.000000, 1.000000},
    1.000000,
    {1.000000, 1.000000, 1.000000, 1.000000},
    4,
  },
  {
    {4.098286, 4.391026, 1.000000, 1.000000},
    0.660584,
    {6.204035, 6.647188, 1.513812, 1.513812},
    2,
  },
  {
    {21.637501, -4.040123, 1.000000, 1.000000},
    -7.050917,
    {-3.068750, 0.572993, -0.141826, -0.141826},
    2,
  },
  {
    {-147.363632, -8.802691, 1.000000, 1.000000},
    -37.298244,
    {3.950954, 0.236008, -0.026811, -0.026811},
    2,
  },
  {
    {-2.591716, -3.386236, 1.000000, 1.000000},
    -3.874464,
    {0.668923, 0.873988, -0.258100, -0.258100},
    2,
  },
  {
    {0.135385, -2.496758, 1.000000, 1.000000},
    9.043893,
    {0.014970, -0.276071, 0.110572, 0.110572},
    2,
  },
  {
    {-1.457944, 13.304615, 1.000000, 1.000000},
    -4.338290,
    {0.336064, -3.066788, -0.230506, -0.230506},
    2,
  },
  {
    {19.631819, 3.350676, 1.000000, 1.000000},
    71.773582,
    {0.273524, 0.046684, 0.013933, 0.013933},
    2,
  },
  {
    {-2.525066, -1.769639, 1.000000, 1.000000},
    -9.787369,
    {0.257992, 0.180808, -0.102173, -0.102173},
    2,
  },
  {
    {-1.576923, -10.666667, 1.000000, 1.000000},
    3.990212,
    {-0.395198, -2.673208, 0.250613, 0.250613},
    2,
  },
  {
    {-7.166415, 2.014673, 4.162242, 1.000000},
    -8.498092,
    {0.843297, -0.237074, -0.489785, -0.117673},
    3,
  },
  {
    {-0.926380, 10.412556, 3.490000, 1.000000},
    6.262091,
    {-0.147935, 1.662792, 0.557322, 0.159691},
    3,
  },
  {
    {-20.400000, 3.820293, -14.303030, 1.000000},
    3.501089,
    {-5.826758, 1.091173, -4.085308, 0.285625},
    3,
  },
  {
    {-2.114224, -7.247312, -0.371134, 1.000000},
    7.792453,
    {-0.271317, -0.930042, -0.047627, 0.128329},
    3,
  },
  {
    {8.502958, -1.730337, 40.067566, 1.000000},
    -3.708725,
    {-2.292691, 0.466558, -10.803597, -0.269634},
    3,
  },
  {
    {3.647420, -5.604651, -3.204189, 1.000000},
    -1.384790,
    {-2.633916, 4.047293, 2.313844, -0.722131},
    3,
  },
  {
    {0.085284, 3.016575, 28.756098, 1.000000},
    4.325109,
    {0.019718, 0.697456, 6.648641, 0.231208},
    3,
  },
  {
    {-34.850574, -4.096774, 12.896227, 1.000000},
    -8.028571,
    {4.340819, 0.510274, -1.606292, -0.124555},
    3,
  },
  {
    {-3.838791, 0.513072, 6.024887, 1.000000},
    -73.199997,
    {0.052443, -0.007009, -0.082307, -0.013661},
    3,
  },
  {
    {7.865506, -2.633684, 9.001912, 1.000000},
    2.119093,
    {3.711733, -1.242836, 4.248003, 0.471900},
    3,
  },
  {
    {1.034211, 21.064039, -4.804678, -5.029605},
    -19.254717,
    {-0.053712, -1.093968, 0.249533, 0.261214},
    4,
  },
  {
    {151.039993, -1147.000000, 4.011793, 0.862613},
    1.466667,
    {102.981811, -782.045438, 2.735313, 0.588145},
    4,
  },
  {
    {-0.914213, -11.113402, -15.105059, -3.625243},
    5.315598,
    {-0.171987, -2.090715, -2.841648, -0.682001},
    4,
  },
  {
    {0.968647, 4.450550, 2.360371, 64.277779},
    -8.231928,
    {-0.117670, -0.540645, -0.286734, -7.808351},
    4,
  },
  {
    {3.180837, 48.767441, 2.916775, 6.030060},
    -324.777771,
    {-0.009794, -0.150156, -0.008981, -0.018567},
    4,
  },
  {
    {5.986994, -8.311295, 2.169417, -4.909492},
    -44.952381,
    {-0.133185, 0.184891, -0.048260, 0.109215},
    4,
  },
  {
    {4.139535, -1.492503, 2.382151, -42.416668},
    4.176795,
    {0.991079, -0.357332, 0.570330, -10.155314},
    4,
  },
  {
    {-5.138462, -9.016360, 16.770834, -2.461631},
    3.547657,
    {-1.448410, -2.541497, 4.727298, -0.693875},
    4,
  },
  {
    {-180.708328, -10.657817, -1.402806, 4.848315},
    -0.251374,
    {718.883426, 42.398311, 5.580560, -19.287286},
    4,
  },
  {
    {-5.120219, -4.594779, -0.255741, 8.823834},
    1.888889,
    {-2.710704, -2.432530, -0.135392, 4.671442},
    4,
  },
};

int main()
{
  float tmp[4] = {0.0, 0.0, 0.0, 0.0};
  unsigned int ind;
  unsigned int jnd;

  for (ind = 0; ind < sizeof(tests) / sizeof(struct divsc_test); ++ind) {
    switch (tests[ind].sz) {
      case 4:
        vec_divsc4fx(tests[ind].va, tmp, tests[ind].sc);
        break;
      case 3:
        vec_divsc3fx(tests[ind].va, tmp, tests[ind].sc);
        break;
      case 2:
        vec_divsc2fx(tests[ind].va, tmp, tests[ind].sc);
        break;
      default:
        printf("error: ended up in default switch statement\n");
        return 2;
    }
    for (jnd = 0; jnd < tests[ind].sz; ++jnd) {
      if (!approx_equalf(tests[ind].vr[jnd], tmp[jnd], APPROX_MAX_ERROR * 10)) {
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
