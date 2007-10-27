#include "v_addsc.h"
#include "v_align.h"
#include "v_simd.h"
#include "v_types.h"
#include "v_inline.h"

#ifdef SYS_HAVE_CPU_EXT_SSE
#include "v_addsc_sse.c"
#endif

#ifdef SYS_HAVE_CPU_EXT_SSE2
#include "v_addsc_sse2.c"
#endif

#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
#include "v_addsc_alti.c"
#endif

float *
vec_addscNf(float *va, float sc, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE
  if (!vec_unaligned(va)) return vec_addscNf_sse(va, sc, n);
#endif
#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
  if (!vec_unaligned(va)) return vec_addscNf_altivec(va, sc, n);
#endif
  vec_ADDSC(va, sc, n, float);
  return va;
}

float *
vec_addscNfx(const float *va, float *vr, float sc, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE
  if (!vec_unaligned(va) && !vec_unaligned(vr))
    return vec_addscNfx_sse(va, vr, sc, n);
#endif
#ifdef SYS_HAVE_CPU_EXT_ALTIVEC
  if (!vec_unaligned(va) && !vec_unaligned(vr))
    return vec_addscNfx_altivec(va, vr, sc, n);
#endif
  vec_ADDSCX(va, vr, sc, n, float);
  return vr;
}

double *
vec_addscNd(double *va, double sc, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE2
  if (!vec_unaligned(va)) return vec_addscNd_sse2(va, sc, n);
#endif
  vec_ADDSC(va, sc, n, double);
  return va;
}

double *
vec_addscNdx(const double *va, double *vr, double sc, unsigned int n)
{
#ifdef SYS_HAVE_CPU_EXT_SSE2
  if (!vec_unaligned(va) && !vec_unaligned(vr))
    return vec_addscNdx_sse2(va, vr, sc, n);
#endif
  vec_ADDSCX(va, vr, sc, n, double);
  return vr;
}