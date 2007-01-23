#!/bin/sh 

. ./test-subs

${CC} ${CFLAGS} ${SSE_FLAGS} \
  -o t_norm4_pure -DVECTOR_NO_SIMD t_norm4.c ../vec_norm.c ../vec_simd.c frand.c
${CC} ${CFLAGS} ${SSE_FLAGS} \
  -o t_norm4_sse2 t_norm4.c ../vec_norm.c ../vec_simd.c frand.c

printf "sse2 "
./t_norm4_sse2
printf "pure "
./t_norm4_pure

rm -f t_norm4_pure t_norm4_sse2