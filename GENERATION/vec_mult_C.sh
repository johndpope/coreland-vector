#!/bin/sh

echo '#include "vector.h"'
echo '#include "vec_mult.h"'
echo
./vec_mult_C 2 float f
echo
./vec_mult_C 3 float f
echo
./vec_mult_C 4 float f
echo
./vec_mult_C 2 double d
echo
./vec_mult_C 3 double d
echo
./vec_mult_C 4 double d
echo
