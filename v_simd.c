#include "v_simd.h"
#include "v_types.h"
#include "v_align.h"
#include "v_inline.h"

/*
 * split ne into buffer sizes and pack into array of hm integers.
 * largest multiplicand is hm - 1. array size must be
 * at least hm. remainder is placed in seg[0].
 *
 * example:
 *   vec_segments (seg, 4, 55);
 *     seg[3] = 3;
 *     seg[2] = 0;
 *     seg[1] = 1;
 *     seg[0] = 3;
 *    
 *       3
 *    + (1 * (2 << 1))
 *    + (0 * (2 << 2))
 *    + (3 * (2 << 3))
 *    = 55
 */

inline void
vec_segments (unsigned int *seg, unsigned int hm, unsigned int ne)
{
  for (;;) {
    if (hm - 1) {
      seg[hm - 1] = ne >> hm;
      ne -= seg[hm - 1] << hm;
      --hm;
    } else {
      *seg = ne; return;
    }
  }
}
