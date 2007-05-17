#include "vec_align.h"
#include "vec_zero.h"
#include "vec_simd.h"

#ifdef SYS_HAVE_CPU_EXT_SSE
static float *vec_zeroNf_sse(float *va, unsigned int ne)
{
  __m128 mvz;
  unsigned int seg[3];
  float *pva;
  unsigned int ind;

  pva = va;
  vec_segments(seg, 3, ne);

  mvz = _mm_setzero_ps();
  for (ind = 0; ind < seg[2]; ++ind) {
    _mm_store_ps(pva, mvz);
    _mm_store_ps(pva + 4, mvz);
    pva += 8;
  }
  for (ind = 0; ind < seg[1]; ++ind) {
    _mm_store_ps(pva, mvz);
    pva += 4;
  }
  for (ind = 0; ind < seg[0]; ++ind)
    pva[ind] = 0;

  return va;
}
#endif

#ifdef SYS_HAVE_CPU_EXT_SSE2
static double *vec_zeroNd_sse2(double *va, unsigned int ne)
{
  __m128d mvz;
  unsigned int seg[2];
  double *pva;
  unsigned int ind;

  pva = va;
  mvz = _mm_setzero_pd();
  vec_segments(seg, 2, ne);

  for (ind = 0; ind < seg[1]; ++ind) {
    _mm_store_pd(pva, mvz);
    _mm_store_pd(pva + 2, mvz);
    pva += 4;
  }
  for (ind = 0; ind < seg[0]; ++ind)
    pva[ind] = 0;

  return va;
}
#endif

#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
static float *vec_zeroNf_altivec(float *va, unsigned int ne)
{
  vector float vz;
  unsigned int seg[4];
  float *pva;
  unsigned int ind;

  vz = vec_ctf(vec_splat_u32(0), 0);
  pva = va;
  vec_segments(seg, 4, ne);

  for (ind = 0; ind < seg[3]; ++ind) {
    vec_st(vz, 0, pva);
    vec_st(vz, 0, pva + 4);
    vec_st(vz, 0, pva + 8);
    vec_st(vz, 0, pva + 12);
    pva += 16;
  }
  for (ind = 0; ind < seg[2]; ++ind) {
    vec_st(vz, 0, pva);
    vec_st(vz, 0, pva + 4);
    pva += 8;
  }
  for (ind = 0; ind < seg[1]; ++ind) {
    vec_st(vz, 0, pva);
    pva += 4;
  }
  for (ind = 0; ind < seg[0]; ++ind)
    pva[ind] = 0;

  return va;
}
#endif

/* interface */

float *vec_zeroNf(float *va, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE
  if (!vec_unaligned(va)) return vec_zeroNf_sse(va, n);
#endif
#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
  if (!vec_unaligned(va)) return vec_zeroNf_altivec(va, n);
#endif
  vec_ZERO(va, n, float);
  return va;
}
double *vec_zeroNd(double *va, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE2
  if (!vec_unaligned(va)) return vec_zeroNd_sse2(va, n);
#endif
  vec_ZERO(va, n, double);
  return va;
}
