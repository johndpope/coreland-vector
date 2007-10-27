#include "v_div.h"
#include "v_align.h"
#include "v_simd.h"

#ifdef SYS_HAVE_CPU_EXT_SSE
#include "v_div_sse.c"
#endif

#ifdef SYS_HAVE_CPU_EXT_SSE2
#include "v_div_sse2.c"
#endif

#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
#include "v_div_alti.c"
#endif

float *
vec_divNf(float *va, const float *vb, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE
  if (n > 3)
    if (!vec_unaligned(va) && !vec_unaligned(vb))
      return vec_divNf_sse(va, vb, n);
#endif
#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
  if (!vec_unaligned(va) && !vec_unaligned(vb))
    return vec_divNf_altivec(va, vb, n);
#endif
  vec_DIV(va, vb, n, float);
  return va;
}

float *
vec_divNfx(const float *va, const float *vb, float *vr, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE
  if (n > 3)
    if (!vec_unaligned(va) && !vec_unaligned(vb) && !vec_unaligned(vr))
      return vec_divNfx_sse(va, vb, vr, n);
#endif
#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
  if (!vec_unaligned(va) && !vec_unaligned(vb) && !vec_unaligned(vr))
    return vec_divNfx_altivec(va, vb, vr, n);
#endif
  vec_DIVX(va, vb, vr, n, float);
  return vr;
}

double *
vec_divNd(double *va, const double *vb, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE2
  if (!vec_unaligned(va) && !vec_unaligned(vb))
    return vec_divNd_sse2(va, vb, n);
#endif
  vec_DIV(va, vb, n, double);
  return va;
}

double *
vec_divNdx(const double *va, const double *vb, double *vr, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE2
  if (!vec_unaligned(va) && !vec_unaligned(vb) && !vec_unaligned(vr))
    return vec_divNdx_sse2(va, vb, vr, n);
#endif
  vec_DIVX(va, vb, vr, n, double);
  return vr;
}
