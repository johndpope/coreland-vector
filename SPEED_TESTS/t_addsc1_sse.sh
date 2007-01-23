#!/bin/sh 

. ./test-subs

${CC} ${CFLAGS} ${SSE_FLAGS} \
  -o t_addsc1_pure -DVECTOR_NO_SIMD t_addsc1.c ../vec_addsc.c ../vec_simd.c frand.c
${CC} ${CFLAGS} ${SSE_FLAGS} \
  -o t_addsc1_sse t_addsc1.c ../vec_addsc.c ../vec_simd.c frand.c

printf "sse "
./t_addsc1_sse
printf "pure "
./t_addsc1_pure

rm -f t_addsc1_pure t_addsc1_sse
