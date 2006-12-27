#include "vector.h"
#include "vec_nega.h"

void vec_nega2f(float v[2])
{
  vec_NEGA2(v);
}
void vec_nega2fx(const float v[2], float vr[2])
{
  vec_NEGA2x(v, vr);
}

void vec_nega3f(float v[3])
{
  vec_NEGA3(v);
}
void vec_nega3fx(const float v[3], float vr[3])
{
  vec_NEGA3x(v, vr);
}

void vec_nega4f(float v[4])
{
  vec_NEGA4(v);
}
void vec_nega4fx(const float v[4], float vr[4])
{
  vec_NEGA4x(v, vr);
}

void vec_nega2d(double v[2])
{
  vec_NEGA2(v);
}
void vec_nega2dx(const double v[2], double vr[2])
{
  vec_NEGA2x(v, vr);
}

void vec_nega3d(double v[3])
{
  vec_NEGA3(v);
}
void vec_nega3dx(const double v[3], double vr[3])
{
  vec_NEGA3x(v, vr);
}

void vec_nega4d(double v[4])
{
  vec_NEGA4(v);
}
void vec_nega4dx(const double v[4], double vr[4])
{
  vec_NEGA4x(v, vr);
}

