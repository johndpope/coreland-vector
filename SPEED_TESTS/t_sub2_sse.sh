#!/bin/sh 

. ./test-subs

${CC} ${CFLAGS} ${SSE_FLAGS} \
  -o t_sub2_pure -DVECTOR_NO_SIMD t_sub2.c ../vec_sub.c ../vec_simd.c frand.c
${CC} ${CFLAGS} ${SSE_FLAGS} \
  -o t_sub2_sse t_sub2.c ../vec_sub.c ../vec_simd.c frand.c

printf "sse "
./t_sub2_sse
printf "pure "
./t_sub2_pure

rm -f t_sub2_pure t_sub2_sse
