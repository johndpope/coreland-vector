#include "ctxt.h"
#include "install.h"

struct install_item insthier[] = {
  {INST_MKDIR, 0, 0, ctxt_bindir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_incdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_dlibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_slibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_repos, 0, 0, 0755},
  {INST_COPY, "v_abs.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_add.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_addsc.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_align.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_angle.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_anglen.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_assi.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_degree.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_degreen.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_dist.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_div.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_divsc.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_dotp.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_mag.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_math.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_mult.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_multsc.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_nega.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_norm.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_proj.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_simd.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_sub.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_subsc.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_sum.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_xprod.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_zero.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "vector-conf.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_sd-ptr_uint.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "_sd-ptr_uint.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_abs.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_abs.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_add.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_add.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_addsc.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_addsc.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_align.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_align.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_angle.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_angle.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_anglen.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_anglen.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_assi.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_assi.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_degree.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_degree.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_degreen.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_degreen.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_dist.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_dist.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_div.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_div.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_divsc.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_divsc.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_dotp.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_dotp.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_inline.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_inline.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_mag.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_mag.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_math.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_math.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_mult.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_mult.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_multsc.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_multsc.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_nega.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_nega.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_norm.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_norm.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_proj.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_proj.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_simd.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_simd.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_sub.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_sub.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_subsc.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_subsc.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_sum.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_sum.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_types.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_types.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_xprod.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_xprod.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "v_zero.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "v_zero.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "vector.h", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "vector.h", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "vector.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "vector.a", "libvector.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "vector-conf.ld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "vector-conf", 0, ctxt_bindir, 0, 0, 0755},
};
unsigned long insthier_len = sizeof(insthier) / sizeof(struct install_item);
