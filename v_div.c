#include "v_simd.h"
#include "v_types.h"
#include "v_align.h"
#include "v_inline.h"

#include "v_div.h"

#ifdef HAVE_CPU_EXT_SSE
#include "v_div.sse"
#endif

#ifdef HAVE_CPU_EXT_SSE2
#include "v_div.sse2"
#endif

#ifdef HAVE_CPU_EXT_ALTIVEC
#include "v_div.alti"
#endif

float *
vec_divNf (float *va, const float *vb, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE
  if (vec_aligned (va) && vec_aligned (vb)) return vec_divNf_sse (va, vb, n);
#endif
#ifdef HAVE_CPU_EXT_ALTIVEC
  if (vec_aligned (va) && vec_aligned (vb)) return vec_divNf_altivec (va, vb, n);
#endif
  vec_DIV (va, vb, n, float);
  return va;
}

float *
vec_divNfx (const float *va, const float *vb, float *vr, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE
  if (vec_aligned (va) && vec_aligned (vb) && vec_aligned (vr))
    return vec_divNfx_sse (va, vb, vr, n);
#endif
#ifdef HAVE_CPU_EXT_ALTIVEC
  if (vec_aligned (va) && vec_aligned (vb) && vec_aligned (vr))
    return vec_divNfx_altivec (va, vb, vr, n);
#endif
  vec_DIVX (va, vb, vr, n, float);
  return vr;
}

double *
vec_divNd (double *va, const double *vb, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE2
  if (vec_aligned (va) && vec_aligned (vb))
    return vec_divNd_sse2 (va, vb, n);
#endif
  vec_DIV (va, vb, n, double);
  return va;
}

double *
vec_divNdx (const double *va, const double *vb, double *vr, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE2
  if (vec_aligned (va) && vec_aligned (vb) && vec_aligned (vr))
    return vec_divNdx_sse2 (va, vb, vr, n);
#endif
  vec_DIVX (va, vb, vr, n, double);
  return vr;
}

float *
vec_divNf_aligned (float *va, const float *vb, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE
  return vec_divNf_sse (va, vb, n);
#endif
#ifdef HAVE_CPU_EXT_ALTIVEC
  return vec_divNf_altivec (va, vb, n);
#endif
  vec_DIV (va, vb, n, float);
  return va;
}

float *
vec_divNfx_aligned (const float *va, const float *vb, float *vr, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE
  return vec_divNfx_sse (va, vb, vr, n);
#endif
#ifdef HAVE_CPU_EXT_ALTIVEC
  return vec_divNfx_altivec (va, vb, vr, n);
#endif
  vec_DIVX (va, vb, vr, n, float);
  return vr;
}

double *
vec_divNd_aligned (double *va, const double *vb, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE2
  return vec_divNd_sse2 (va, vb, n);
#endif
  vec_DIV (va, vb, n, double);
  return va;
}

double *
vec_divNdx_aligned (const double *va, const double *vb, double *vr, unsigned int n)
{
#ifdef HAVE_CPU_EXT_SSE2
  return vec_divNdx_sse2 (va, vb, vr, n);
#endif
  vec_DIVX (va, vb, vr, n, double);
  return vr;
}
