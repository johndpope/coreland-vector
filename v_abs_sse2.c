#include "v_abs.h"
#include "v_align.h"
#include "v_simd.h"
#include "v_inline.h"

#ifdef HAVE_CPU_EXT_SSE2

static inline double
*vec_absNd_sse2(double *va, unsigned int ne)
{
  __m128d mva1;
  __m128d mva2;
  __m128d mva3;
  __m128d mva4;
  __m128d mvx;
  unsigned int seg[4];
  double *pva;
  const union { unsigned long long i; double d; } sb = { 0x7fffffffffffffff };
  unsigned int ind;

  mvx = _mm_set1_pd(sb.d);
  pva = va;
  vec_segments(seg, 4, ne);

  for (ind = 0; ind < seg[3]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mva2 = _mm_load_pd(pva + 4);
    mva3 = _mm_load_pd(pva + 8);
    mva4 = _mm_load_pd(pva + 12);
    mva1 = _mm_and_pd(mvx, mva1);
    mva2 = _mm_and_pd(mvx, mva2);
    mva3 = _mm_and_pd(mvx, mva3);
    mva4 = _mm_and_pd(mvx, mva4);
    _mm_store_pd(pva, mva1);
    _mm_store_pd(pva + 4, mva2);
    _mm_store_pd(pva + 8, mva3);
    _mm_store_pd(pva + 12, mva4);
    pva += 16;
  }
  for (ind = 0; ind < seg[2]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mva2 = _mm_load_pd(pva + 4);
    mva1 = _mm_and_pd(mvx, mva1);
    mva2 = _mm_and_pd(mvx, mva2);
    _mm_store_pd(pva, mva1);
    _mm_store_pd(pva + 4, mva2);
    pva += 8;
  }
  for (ind = 0; ind < seg[1]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mva1 = _mm_and_pd(mvx, mva1);
    _mm_store_pd(pva, mva1);
    pva += 4;
  }
  for (ind = 0; ind < seg[0]; ++ind)
    pva[ind] = fabs(pva[ind]);

  return va;
}

static inline double *
vec_absNdx_sse2(const double *va, double *vr, unsigned int ne)
{
  __m128d mva1;
  __m128d mva2;
  __m128d mva3 = {0.0, 0.0};
  __m128d mva4;
  __m128d mvx;
  __m128d mvr;
  unsigned int seg[4];
  const double *pva;
  double *pvr;
  const union { unsigned long long i; double d; } sb = { 0x7fffffffffffffff };
  unsigned int ind;

  mvx = _mm_set1_pd(sb.d);
  pva = va;
  pvr = vr;
  vec_segments(seg, 4, ne);

  for (ind = 0; ind < seg[3]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mva2 = _mm_load_pd(pva + 4);
    mva3 = _mm_load_pd(pva + 8);
    mva4 = _mm_load_pd(pva + 12);
    mvr = _mm_and_pd(mvx, mva1);
    _mm_store_pd(pvr, mvr);
    mvr = _mm_and_pd(mvx, mva2);
    _mm_store_pd(pvr + 4, mvr);
    mvr = _mm_and_pd(mvx, mva3);
    _mm_store_pd(pvr + 8, mvr);
    mvr = _mm_and_pd(mvx, mva4);
    _mm_store_pd(pvr + 12, mvr);
    pva += 16;
    pvr += 16;
  }
  for (ind = 0; ind < seg[2]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mva2 = _mm_load_pd(pva + 4);
    mvr = _mm_and_pd(mvx, mva1);
    _mm_store_pd(pvr, mvr);
    mvr = _mm_and_pd(mvx, mva2);
    _mm_store_pd(pvr + 4, mvr);
    mvr = _mm_and_pd(mvx, mva3);
    pva += 8;
    pvr += 8;
  }
  for (ind = 0; ind < seg[1]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mvr = _mm_and_pd(mvx, mva1);
    _mm_store_pd(pvr, mvr);
    pva += 4;
    pvr += 4;
  }
  for (ind = 0; ind < seg[0]; ++ind)
    pvr[ind] = fabs(pva[ind]);

  return vr;
}

#endif
