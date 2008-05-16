#include "v_zero.h"
#include "v_align.h"
#include "v_simd.h"
#include "v_inline.h"

#ifdef HAVE_CPU_EXT_SSE

static inline float *
vec_zeroNf_sse_lt16(float *va, unsigned int ne)
{
  __m128 mvz; 
  float *pva;
  unsigned int ind;
  unsigned int n4;
  unsigned int nr;

  mvz = _mm_setzero_ps();
  pva = va;
  n4 = ne >> 2;
  nr = ne - (n4 << 2);

  for (ind = 0; ind < n4; ++ind) {
    _mm_store_ps(pva, mvz);
    pva += 4;
  }
  for (ind = 0; ind < nr; ++ind)
    pva[ind] = 0;

  return va;
}

static inline float *
vec_zeroNf_sse_gte16(float *va, unsigned int ne)
{
  __m128 mvz; 
  float *pva;
  unsigned int ind;
  unsigned int n16;
  unsigned int nr;

  mvz = _mm_setzero_ps();
  pva = va;
  n16 = ne >> 4;
  nr = ne - (n16 << 4);

  for (ind = 0; ind < n16; ++ind) {
    _mm_store_ps(pva, mvz); pva += 4;
    _mm_store_ps(pva, mvz); pva += 4;
    _mm_store_ps(pva, mvz); pva += 4;
    _mm_store_ps(pva, mvz); pva += 4;
  }

  if (nr) vec_zeroNf_sse_lt16(pva, nr);
  return va;
}

static inline float *
vec_zeroNf_sse(float *va, unsigned int ne)
{
  return (ne >= 16) ? vec_zeroNf_sse_gte16(va, ne) : vec_zeroNf_sse_lt16(va, ne);
}

#endif
