#!/bin/sh

echo '#include "vector.h"'
echo '#include "vec_zero.h"'
echo
./vec_zero_C 2 float f
echo
./vec_zero_C 3 float f
echo
./vec_zero_C 4 float f
echo
./vec_zero_C 2 double d
echo
./vec_zero_C 3 double d
echo
./vec_zero_C 4 double d
echo
