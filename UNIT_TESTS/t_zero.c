#include <stdio.h>
#include <math.h>
#include "../vector.h"
#include "t_util.h"

#include "t_zero_data.dat"

vector_16f vftmp;
vector_16d vdtmp;
float *ftmp = (float *) &vftmp;
double *dtmp = (double *) &vdtmp;

int main()
{
  double *dpr;
  float *fpr;
  unsigned int ind;
  unsigned int jnd;

  /* single precision */
  for (ind = 0; ind < sizeof(tests_f) / sizeof(struct zero_testf); ++ind) {
    fpr = (float *) &tests_f[ind].vvr;

    vec_zeroNf(ftmp, tests_f[ind].sz);

    for (jnd = 0; jnd < tests_f[ind].sz; ++jnd) {
      if (!approx_equalf(fpr[jnd], ftmp[jnd], APPROX_MAX_ERRORF)) {
        printf("fail: tests_f[%u] vr[%u] %f != ftmp[%u] %f\n",
                ind, jnd, fpr[jnd], jnd, ftmp[jnd]);
        return 1;
      }
      printf("[%u] vr[%u] %f ~ ftmp[%u] %f\n",
              ind, jnd, fpr[jnd], jnd, ftmp[jnd]);
    }
    printf("--\n");
  }

  /* double precision */
  for (ind = 0; ind < sizeof(tests_d) / sizeof(struct zero_testd); ++ind) {
    dpr = (double *) &tests_d[ind].vvr;

    vec_zeroNd(dtmp, tests_d[ind].sz);

    for (jnd = 0; jnd < tests_d[ind].sz; ++jnd) {
      if (!approx_equald(dpr[jnd], dtmp[jnd], APPROX_MAX_ERRORD)) {
        printf("fail: tests_d[%u] vr[%u] %f != dtmp[%u] %f\n",
                ind, jnd, dpr[jnd], jnd, dtmp[jnd]);
        return 1;
      }
      printf("[%u] vr[%u] %f ~ dtmp[%u] %f\n",
              ind, jnd, dpr[jnd], jnd, dtmp[jnd]);
    }
    printf("--\n");
  }

  return 0;
} 
