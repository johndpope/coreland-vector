#include <math.h>
#include "vec_angle.h"
#include "vec_anglen.h"
#include "vec_degreen.h"

float vec_degreenormNf(const float *va, const float *vb, unsigned int n)
{
  return vec_anglenormNf(va, vb, n) * (180 / M_PI);
}
double vec_degreenormNd(const double *va, const double *vb, unsigned int n)
{
  return vec_anglenormNd(va, vb, n) * (180 / M_PI);
}