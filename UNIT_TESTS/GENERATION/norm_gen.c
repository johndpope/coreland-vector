#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "frand.h"

float fa[16];
float fb[16];
double da[16];
double db[16];

void out(unsigned int sz, void *a, unsigned int es)
{
  float ftmp[16];
  double dtmp[16];
  double mag;
  double rcp;
  unsigned int ind;
  float *pfa;
  double *pda;

  if (es == sizeof(float)) {
    pfa = (float *) a;
    memset(ftmp, 0, sizeof(float) * 16);
    memcpy(ftmp, pfa, sizeof(float) * sz);
  } else {
    pda = (double *) a;
    memset(dtmp, 0, sizeof(double) * 16);
    memcpy(dtmp, pda, sizeof(double) * sz);
  }

  printf("{\n");
  printf("  {{");
  for (ind = 0; ind < 16; ++ind)
    if (es == sizeof(float))
      printf("%lf, ", pfa[ind]);
    else
      printf("%lf, ", pda[ind]);
  printf("}},\n");

  mag = 0;
  if (es == sizeof(float))
    for (ind = 0; ind < sz; ++ind)
      mag += (pfa[ind] * pfa[ind]);
  else
    for (ind = 0; ind < sz; ++ind)
      mag += (pda[ind] * pda[ind]);

  if (mag) {
    rcp = 1 / sqrt(mag);
    if (es == sizeof(float))
      for (ind = 0; ind < sz; ++ind) ftmp[ind] *= rcp;
    else
      for (ind = 0; ind < sz; ++ind) dtmp[ind] *= rcp;
  }

  printf("  {{");
  for (ind = 0; ind < 16; ++ind)
    if (es == sizeof(float))
      printf("%lf, ", ftmp[ind]);
    else
      printf("%lf, ", dtmp[ind]);
  printf("}},\n");

  printf("  %u,\n", sz);
  printf("},\n");
}

void gen(unsigned int sz, void *a, unsigned int es)
{
  unsigned int ind;
  float *pfa;
  double *pda;

  if (es == sizeof(float)) {
    pfa = (float *) a;
    memset(pfa, 0, sizeof(float) * 16);
  } else {
    pda = (double *) a;
    memset(pda, 0, sizeof(double) * 16);
  }

  for (ind = 0; ind < sz; ++ind) {
    if (es == sizeof(float))
      pfa[ind] = (float) frand();
    else
      pda[ind] = frand();
  }
}

int main()
{
  unsigned int ind;
  unsigned int jnd;
  unsigned int sz;

  srandom(time(0));

  memset(fa, 0, sizeof(float) * 16);
  sz = 2;
  printf("struct norm_testf tests_f[] = {\n");
  out(16, fa, sizeof(float));
  for (ind = 1; ind < 150; ++ind) {
    if (ind && !(ind % 10)) ++sz;
    gen(sz, fa, sizeof(float));
    out(sz, fa, sizeof(float));
  }
  printf("};\n");

  memset(da, 0, sizeof(double) * 16);
  sz = 2;
  printf("struct norm_testd tests_d[] = {\n");
  out(16, da, sizeof(double));
  for (ind = 1; ind < 150; ++ind) {
    if (ind && !(ind % 10)) ++sz;
    gen(sz, da, sizeof(double));
    out(sz, da, sizeof(double));
  }
  printf("};\n");
  return 0;
}
