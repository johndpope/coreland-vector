#include "v_add.h"
#include "v_align.h"
#include "v_simd.h"

#ifdef HAVE_CPU_EXT_SSE2

static inline double *
vec_addNd_sse2(double *va, const double *vb, unsigned int ne)
{
  __m128d mva1;
  __m128d mvb1;
  unsigned int seg[4];
  const double *pvb;
  double *pva;
  unsigned int ind;

  pva = va;
  pvb = vb;
  vec_segments(seg, 4, ne);

  for (ind = 0; ind < seg[3]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mvb1 = _mm_load_pd(pvb);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva, mva1);
    mva1 = _mm_load_pd(pva + 2);
    mvb1 = _mm_load_pd(pvb + 2);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 2, mva1);
    mva1 = _mm_load_pd(pva + 4);
    mvb1 = _mm_load_pd(pvb + 4);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 4, mva1);
    mva1 = _mm_load_pd(pva + 6);
    mvb1 = _mm_load_pd(pvb + 6);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 6, mva1);
    mva1 = _mm_load_pd(pva + 8);
    mvb1 = _mm_load_pd(pvb + 8);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 8, mva1);
    mva1 = _mm_load_pd(pva + 10);
    mvb1 = _mm_load_pd(pvb + 10);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 10, mva1);
    mva1 = _mm_load_pd(pva + 12);
    mvb1 = _mm_load_pd(pvb + 12);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 12, mva1);
    mva1 = _mm_load_pd(pva + 14);
    mvb1 = _mm_load_pd(pvb + 14);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 14, mva1);
    pva += 16;
    pvb += 16;
  }
  for (ind = 0; ind < seg[2]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mvb1 = _mm_load_pd(pvb);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva, mva1);
    mva1 = _mm_load_pd(pva + 2);
    mvb1 = _mm_load_pd(pvb + 2);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 2, mva1);
    mva1 = _mm_load_pd(pva + 4);
    mvb1 = _mm_load_pd(pvb + 4);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 4, mva1);
    mva1 = _mm_load_pd(pva + 6);
    mvb1 = _mm_load_pd(pvb + 6);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 6, mva1);
    pva += 8;
    pvb += 8;
  }
  for (ind = 0; ind < seg[1]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mvb1 = _mm_load_pd(pvb);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva, mva1);
    mva1 = _mm_load_pd(pva + 2);
    mvb1 = _mm_load_pd(pvb + 2);
    mva1 = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pva + 2, mva1);
    pva += 4;
    pvb += 4;
  }
  for (ind = 0; ind < seg[0]; ++ind)
    pva[ind] += pvb[ind];

  return va;
}

static inline double *
vec_addNdx_sse2(const double *va, const double *vb, double *vr, unsigned int ne)
{
  __m128d mva1;
  __m128d mva2;
  __m128d mvb1;
  __m128d mvb2;
  __m128d mvr;
  unsigned int seg[2];
  const double *pva;
  const double *pvb;
  double *pvr;
  unsigned int ind;

  pva = va;
  pvb = vb;
  pvr = vr;
  vec_segments(seg, 2, ne);

  for (ind = 0; ind < seg[1]; ++ind) {
    mva1 = _mm_load_pd(pva);
    mva2 = _mm_load_pd(pva + 2);
    mvb1 = _mm_load_pd(pvb);
    mvb2 = _mm_load_pd(pvb + 2);
    mvr = _mm_add_pd(mva1, mvb1);
    _mm_store_pd(pvr, mvr);
    mvr = _mm_add_pd(mva2, mvb2);
    _mm_store_pd(pvr + 2, mvr);
    pva += 4;
    pvb += 4;
    pvr += 4;
  }
  for (ind = 0; ind < seg[0]; ++ind)
    pvr[ind] = pva[ind] + pvb[ind];

  return vr;
}

#endif
