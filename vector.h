#ifndef VECTOR_H
#define VECTOR_H

#include "vec_add.h"
#include "vec_addsc.h"
#include "vec_angle.h"
#include "vec_anglen.h"
#include "vec_assi.h"
#include "vec_dist.h"
#include "vec_div.h"
#include "vec_divsc.h"
#include "vec_dotp.h"
#include "vec_mag.h"
#include "vec_mult.h"
#include "vec_multsc.h"
#include "vec_nega.h"
#include "vec_norm.h"
#include "vec_sub.h"
#include "vec_subsc.h"
#include "vec_xprod.h"
#include "vec_zero.h"
#include "vec_types.h"

float *vec_crossprod3fx(const float [3], const float [3], float [3]);
double *vec_crossprod3dx(const double [3], const double [3], double [3]);

#endif
