# auto generated - do not edit

default: all

all:\
UNIT_TESTS/t_abs1 UNIT_TESTS/t_abs2 UNIT_TESTS/t_add1 UNIT_TESTS/t_add2 \
UNIT_TESTS/t_addsc1 UNIT_TESTS/t_addsc2 UNIT_TESTS/t_align1 \
UNIT_TESTS/t_assign UNIT_TESTS/t_div1 UNIT_TESTS/t_div2 UNIT_TESTS/t_divsc1 \
UNIT_TESTS/t_divsc2 UNIT_TESTS/t_dotprod UNIT_TESTS/t_mag1 \
UNIT_TESTS/t_mult1 UNIT_TESTS/t_mult2 UNIT_TESTS/t_multsc1 \
UNIT_TESTS/t_multsc2 UNIT_TESTS/t_nega1 UNIT_TESTS/t_nega2 \
UNIT_TESTS/t_norm1 UNIT_TESTS/t_norm2 UNIT_TESTS/t_sub1 UNIT_TESTS/t_sub2 \
UNIT_TESTS/t_subsc1 UNIT_TESTS/t_subsc2 UNIT_TESTS/t_util.a \
UNIT_TESTS/t_xprod UNIT_TESTS/t_zero ctxt/ctxt.a deinstaller inst-check \
inst-copy inst-dir inst-link installer instchk vector-conf vector.a 

# -- SYSDEPS start
flags-altivec:
	@echo SYSDEPS altivec-flags run create flags-altivec 
	@(cd SYSDEPS/modules/altivec-flags && ./run)
_sd_inline.h:
	@echo SYSDEPS sd-inline run create _sd_inline.h 
	@(cd SYSDEPS/modules/sd-inline && ./run)
libs-math:
	@echo SYSDEPS sd-math run create _sd_math.h flags-math libs-math 
	@(cd SYSDEPS/modules/sd-math && ./run)
flags-math: libs-math
_sd_math.h: libs-math
_sd-ptr_uint.h:
	@echo SYSDEPS sd-ptr_uint run create _sd-ptr_uint.h 
	@(cd SYSDEPS/modules/sd-ptr_uint && ./run)
flags-sse:
	@echo SYSDEPS sse-flags run create flags-sse 
	@(cd SYSDEPS/modules/sse-flags && ./run)
flags-sse2:
	@echo SYSDEPS sse2-flags run create flags-sse2 
	@(cd SYSDEPS/modules/sse2-flags && ./run)
flags-sse3:
	@echo SYSDEPS sse3-flags run create flags-sse3 
	@(cd SYSDEPS/modules/sse3-flags && ./run)
_sysinfo.h:
	@echo SYSDEPS sysinfo run create _sysinfo.h 
	@(cd SYSDEPS/modules/sysinfo && ./run)


altivec-flags_clean:
	@echo SYSDEPS altivec-flags clean flags-altivec 
	@(cd SYSDEPS/modules/altivec-flags && ./clean)
sd-inline_clean:
	@echo SYSDEPS sd-inline clean _sd_inline.h 
	@(cd SYSDEPS/modules/sd-inline && ./clean)
sd-math_clean:
	@echo SYSDEPS sd-math clean _sd_math.h flags-math libs-math 
	@(cd SYSDEPS/modules/sd-math && ./clean)
sd-ptr_uint_clean:
	@echo SYSDEPS sd-ptr_uint clean _sd-ptr_uint.h 
	@(cd SYSDEPS/modules/sd-ptr_uint && ./clean)
sse-flags_clean:
	@echo SYSDEPS sse-flags clean flags-sse 
	@(cd SYSDEPS/modules/sse-flags && ./clean)
sse2-flags_clean:
	@echo SYSDEPS sse2-flags clean flags-sse2 
	@(cd SYSDEPS/modules/sse2-flags && ./clean)
sse3-flags_clean:
	@echo SYSDEPS sse3-flags clean flags-sse3 
	@(cd SYSDEPS/modules/sse3-flags && ./clean)
sysinfo_clean:
	@echo SYSDEPS sysinfo clean _sysinfo.h 
	@(cd SYSDEPS/modules/sysinfo && ./clean)


sysdeps_clean:\
altivec-flags_clean \
sd-inline_clean \
sd-math_clean \
sd-ptr_uint_clean \
sse-flags_clean \
sse2-flags_clean \
sse3-flags_clean \
sysinfo_clean \


# -- SYSDEPS end

UNIT_TESTS/t_abs1:\
cc-link UNIT_TESTS/t_abs1.ld UNIT_TESTS/t_abs1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_abs1 UNIT_TESTS/t_abs1.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_abs1.o:\
cc-compile UNIT_TESTS/t_abs1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_abs_data.c 
	./cc-compile UNIT_TESTS/t_abs1.c

UNIT_TESTS/t_abs2:\
cc-link UNIT_TESTS/t_abs2.ld UNIT_TESTS/t_abs2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_abs2 UNIT_TESTS/t_abs2.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_abs2.o:\
cc-compile UNIT_TESTS/t_abs2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_abs_data.c 
	./cc-compile UNIT_TESTS/t_abs2.c

UNIT_TESTS/t_abs_data.o:\
cc-compile UNIT_TESTS/t_abs_data.c 
	./cc-compile UNIT_TESTS/t_abs_data.c

UNIT_TESTS/t_add1:\
cc-link UNIT_TESTS/t_add1.ld UNIT_TESTS/t_add1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_add1 UNIT_TESTS/t_add1.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_add1.o:\
cc-compile UNIT_TESTS/t_add1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_add_data.c 
	./cc-compile UNIT_TESTS/t_add1.c

UNIT_TESTS/t_add2:\
cc-link UNIT_TESTS/t_add2.ld UNIT_TESTS/t_add2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_add2 UNIT_TESTS/t_add2.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_add2.o:\
cc-compile UNIT_TESTS/t_add2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_add_data.c 
	./cc-compile UNIT_TESTS/t_add2.c

UNIT_TESTS/t_add_data.o:\
cc-compile UNIT_TESTS/t_add_data.c 
	./cc-compile UNIT_TESTS/t_add_data.c

UNIT_TESTS/t_addsc1:\
cc-link UNIT_TESTS/t_addsc1.ld UNIT_TESTS/t_addsc1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_addsc1 UNIT_TESTS/t_addsc1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_addsc1.o:\
cc-compile UNIT_TESTS/t_addsc1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_addsc_data.c 
	./cc-compile UNIT_TESTS/t_addsc1.c

UNIT_TESTS/t_addsc2:\
cc-link UNIT_TESTS/t_addsc2.ld UNIT_TESTS/t_addsc2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_addsc2 UNIT_TESTS/t_addsc2.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_addsc2.o:\
cc-compile UNIT_TESTS/t_addsc2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_addsc_data.c 
	./cc-compile UNIT_TESTS/t_addsc2.c

UNIT_TESTS/t_addsc_data.o:\
cc-compile UNIT_TESTS/t_addsc_data.c 
	./cc-compile UNIT_TESTS/t_addsc_data.c

UNIT_TESTS/t_align1:\
cc-link UNIT_TESTS/t_align1.ld UNIT_TESTS/t_align1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_align1 UNIT_TESTS/t_align1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_align1.o:\
cc-compile UNIT_TESTS/t_align1.c vector.h v_align.h UNIT_TESTS/t_util.h 
	./cc-compile UNIT_TESTS/t_align1.c

UNIT_TESTS/t_assign:\
cc-link UNIT_TESTS/t_assign.ld UNIT_TESTS/t_assign.o UNIT_TESTS/t_util.o \
vector.a 
	./cc-link UNIT_TESTS/t_assign UNIT_TESTS/t_assign.o \
	UNIT_TESTS/t_util.o vector.a 

UNIT_TESTS/t_assign.o:\
cc-compile UNIT_TESTS/t_assign.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_assign_data.c 
	./cc-compile UNIT_TESTS/t_assign.c

UNIT_TESTS/t_assign_data.o:\
cc-compile UNIT_TESTS/t_assign_data.c 
	./cc-compile UNIT_TESTS/t_assign_data.c

UNIT_TESTS/t_div1:\
cc-link UNIT_TESTS/t_div1.ld UNIT_TESTS/t_div1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_div1 UNIT_TESTS/t_div1.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_div1.o:\
cc-compile UNIT_TESTS/t_div1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_div_data.c 
	./cc-compile UNIT_TESTS/t_div1.c

UNIT_TESTS/t_div2:\
cc-link UNIT_TESTS/t_div2.ld UNIT_TESTS/t_div2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_div2 UNIT_TESTS/t_div2.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_div2.o:\
cc-compile UNIT_TESTS/t_div2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_div_data.c 
	./cc-compile UNIT_TESTS/t_div2.c

UNIT_TESTS/t_div_data.o:\
cc-compile UNIT_TESTS/t_div_data.c 
	./cc-compile UNIT_TESTS/t_div_data.c

UNIT_TESTS/t_divsc1:\
cc-link UNIT_TESTS/t_divsc1.ld UNIT_TESTS/t_divsc1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_divsc1 UNIT_TESTS/t_divsc1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_divsc1.o:\
cc-compile UNIT_TESTS/t_divsc1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_divsc_data.c 
	./cc-compile UNIT_TESTS/t_divsc1.c

UNIT_TESTS/t_divsc2:\
cc-link UNIT_TESTS/t_divsc2.ld UNIT_TESTS/t_divsc2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_divsc2 UNIT_TESTS/t_divsc2.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_divsc2.o:\
cc-compile UNIT_TESTS/t_divsc2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_divsc_data.c 
	./cc-compile UNIT_TESTS/t_divsc2.c

UNIT_TESTS/t_divsc_data.o:\
cc-compile UNIT_TESTS/t_divsc_data.c 
	./cc-compile UNIT_TESTS/t_divsc_data.c

UNIT_TESTS/t_dotp_data.o:\
cc-compile UNIT_TESTS/t_dotp_data.c 
	./cc-compile UNIT_TESTS/t_dotp_data.c

UNIT_TESTS/t_dotprod:\
cc-link UNIT_TESTS/t_dotprod.ld UNIT_TESTS/t_dotprod.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_dotprod UNIT_TESTS/t_dotprod.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_dotprod.o:\
cc-compile UNIT_TESTS/t_dotprod.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_dotp_data.c 
	./cc-compile UNIT_TESTS/t_dotprod.c

UNIT_TESTS/t_mag1:\
cc-link UNIT_TESTS/t_mag1.ld UNIT_TESTS/t_mag1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_mag1 UNIT_TESTS/t_mag1.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_mag1.o:\
cc-compile UNIT_TESTS/t_mag1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_mag_data.c 
	./cc-compile UNIT_TESTS/t_mag1.c

UNIT_TESTS/t_mag_data.o:\
cc-compile UNIT_TESTS/t_mag_data.c 
	./cc-compile UNIT_TESTS/t_mag_data.c

UNIT_TESTS/t_mult1:\
cc-link UNIT_TESTS/t_mult1.ld UNIT_TESTS/t_mult1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_mult1 UNIT_TESTS/t_mult1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_mult1.o:\
cc-compile UNIT_TESTS/t_mult1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_mult_data.c 
	./cc-compile UNIT_TESTS/t_mult1.c

UNIT_TESTS/t_mult2:\
cc-link UNIT_TESTS/t_mult2.ld UNIT_TESTS/t_mult2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_mult2 UNIT_TESTS/t_mult2.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_mult2.o:\
cc-compile UNIT_TESTS/t_mult2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_mult_data.c 
	./cc-compile UNIT_TESTS/t_mult2.c

UNIT_TESTS/t_mult_data.o:\
cc-compile UNIT_TESTS/t_mult_data.c 
	./cc-compile UNIT_TESTS/t_mult_data.c

UNIT_TESTS/t_multsc1:\
cc-link UNIT_TESTS/t_multsc1.ld UNIT_TESTS/t_multsc1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_multsc1 UNIT_TESTS/t_multsc1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_multsc1.o:\
cc-compile UNIT_TESTS/t_multsc1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_multsc_data.c 
	./cc-compile UNIT_TESTS/t_multsc1.c

UNIT_TESTS/t_multsc2:\
cc-link UNIT_TESTS/t_multsc2.ld UNIT_TESTS/t_multsc2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_multsc2 UNIT_TESTS/t_multsc2.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_multsc2.o:\
cc-compile UNIT_TESTS/t_multsc2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_multsc_data.c 
	./cc-compile UNIT_TESTS/t_multsc2.c

UNIT_TESTS/t_multsc_data.o:\
cc-compile UNIT_TESTS/t_multsc_data.c 
	./cc-compile UNIT_TESTS/t_multsc_data.c

UNIT_TESTS/t_nega1:\
cc-link UNIT_TESTS/t_nega1.ld UNIT_TESTS/t_nega1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_nega1 UNIT_TESTS/t_nega1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_nega1.o:\
cc-compile UNIT_TESTS/t_nega1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_nega_data.c 
	./cc-compile UNIT_TESTS/t_nega1.c

UNIT_TESTS/t_nega2:\
cc-link UNIT_TESTS/t_nega2.ld UNIT_TESTS/t_nega2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_nega2 UNIT_TESTS/t_nega2.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_nega2.o:\
cc-compile UNIT_TESTS/t_nega2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_nega_data.c 
	./cc-compile UNIT_TESTS/t_nega2.c

UNIT_TESTS/t_nega_data.o:\
cc-compile UNIT_TESTS/t_nega_data.c 
	./cc-compile UNIT_TESTS/t_nega_data.c

UNIT_TESTS/t_norm1:\
cc-link UNIT_TESTS/t_norm1.ld UNIT_TESTS/t_norm1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_norm1 UNIT_TESTS/t_norm1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_norm1.o:\
cc-compile UNIT_TESTS/t_norm1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_norm_data.c 
	./cc-compile UNIT_TESTS/t_norm1.c

UNIT_TESTS/t_norm2:\
cc-link UNIT_TESTS/t_norm2.ld UNIT_TESTS/t_norm2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_norm2 UNIT_TESTS/t_norm2.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_norm2.o:\
cc-compile UNIT_TESTS/t_norm2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_norm_data.c 
	./cc-compile UNIT_TESTS/t_norm2.c

UNIT_TESTS/t_norm_data.o:\
cc-compile UNIT_TESTS/t_norm_data.c 
	./cc-compile UNIT_TESTS/t_norm_data.c

UNIT_TESTS/t_sub1:\
cc-link UNIT_TESTS/t_sub1.ld UNIT_TESTS/t_sub1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_sub1 UNIT_TESTS/t_sub1.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_sub1.o:\
cc-compile UNIT_TESTS/t_sub1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_sub_data.c 
	./cc-compile UNIT_TESTS/t_sub1.c

UNIT_TESTS/t_sub2:\
cc-link UNIT_TESTS/t_sub2.ld UNIT_TESTS/t_sub2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_sub2 UNIT_TESTS/t_sub2.o UNIT_TESTS/t_util.a \
	vector.a 

UNIT_TESTS/t_sub2.o:\
cc-compile UNIT_TESTS/t_sub2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_sub_data.c 
	./cc-compile UNIT_TESTS/t_sub2.c

UNIT_TESTS/t_sub_data.o:\
cc-compile UNIT_TESTS/t_sub_data.c 
	./cc-compile UNIT_TESTS/t_sub_data.c

UNIT_TESTS/t_subsc1:\
cc-link UNIT_TESTS/t_subsc1.ld UNIT_TESTS/t_subsc1.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_subsc1 UNIT_TESTS/t_subsc1.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_subsc1.o:\
cc-compile UNIT_TESTS/t_subsc1.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_subsc_data.c 
	./cc-compile UNIT_TESTS/t_subsc1.c

UNIT_TESTS/t_subsc2:\
cc-link UNIT_TESTS/t_subsc2.ld UNIT_TESTS/t_subsc2.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_subsc2 UNIT_TESTS/t_subsc2.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_subsc2.o:\
cc-compile UNIT_TESTS/t_subsc2.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_subsc_data.c 
	./cc-compile UNIT_TESTS/t_subsc2.c

UNIT_TESTS/t_subsc_data.o:\
cc-compile UNIT_TESTS/t_subsc_data.c 
	./cc-compile UNIT_TESTS/t_subsc_data.c

UNIT_TESTS/t_util.a:\
cc-slib UNIT_TESTS/t_util.sld UNIT_TESTS/t_util.o 
	./cc-slib UNIT_TESTS/t_util UNIT_TESTS/t_util.o 

UNIT_TESTS/t_util.o:\
cc-compile UNIT_TESTS/t_util.c UNIT_TESTS/t_util.h 
	./cc-compile UNIT_TESTS/t_util.c

UNIT_TESTS/t_xprod:\
cc-link UNIT_TESTS/t_xprod.ld UNIT_TESTS/t_xprod.o UNIT_TESTS/t_util.a \
vector.a 
	./cc-link UNIT_TESTS/t_xprod UNIT_TESTS/t_xprod.o \
	UNIT_TESTS/t_util.a vector.a 

UNIT_TESTS/t_xprod.o:\
cc-compile UNIT_TESTS/t_xprod.c vector.h UNIT_TESTS/t_util.h 
	./cc-compile UNIT_TESTS/t_xprod.c

UNIT_TESTS/t_zero:\
cc-link UNIT_TESTS/t_zero.ld UNIT_TESTS/t_zero.o UNIT_TESTS/t_util.o \
vector.a 
	./cc-link UNIT_TESTS/t_zero UNIT_TESTS/t_zero.o UNIT_TESTS/t_util.o \
	vector.a 

UNIT_TESTS/t_zero.o:\
cc-compile UNIT_TESTS/t_zero.c vector.h UNIT_TESTS/t_util.h \
UNIT_TESTS/t_zero_data.c 
	./cc-compile UNIT_TESTS/t_zero.c

UNIT_TESTS/t_zero_data.o:\
cc-compile UNIT_TESTS/t_zero_data.c 
	./cc-compile UNIT_TESTS/t_zero_data.c

cc-compile:\
conf-cc conf-cctype conf-systype conf-cflags flags-sse flags-sse2 flags-sse3 \
flags-altivec flags-math 

cc-link:\
conf-ld conf-ldtype conf-systype libs-math 

cc-slib:\
conf-systype 

conf-cctype:\
conf-systype conf-cc mk-cctype 
	./mk-cctype > conf-cctype.tmp && mv conf-cctype.tmp conf-cctype

conf-ldtype:\
conf-systype conf-ld conf-cctype mk-ldtype 
	./mk-ldtype > conf-ldtype.tmp && mv conf-ldtype.tmp conf-ldtype

conf-sosuffix:\
mk-sosuffix 
	./mk-sosuffix > conf-sosuffix.tmp && mv conf-sosuffix.tmp \
	conf-sosuffix

conf-systype:\
mk-systype 
	./mk-systype > conf-systype.tmp && mv conf-systype.tmp conf-systype

ctxt/bindir.c: mk-ctxt conf-bindir
	rm -f ctxt/bindir.c
	./mk-ctxt ctxt_bindir < conf-bindir > ctxt/bindir.c

ctxt/bindir.o:\
cc-compile ctxt/bindir.c 
	./cc-compile ctxt/bindir.c

ctxt/ctxt.a:\
cc-slib ctxt/ctxt.sld ctxt/bindir.o ctxt/dlibdir.o ctxt/flags_altivec.o \
ctxt/flags_math.o ctxt/flags_sse.o ctxt/flags_sse2.o ctxt/flags_sse3.o \
ctxt/incdir.o ctxt/libs_math.o ctxt/repos.o ctxt/slibdir.o ctxt/version.o 
	./cc-slib ctxt/ctxt ctxt/bindir.o ctxt/dlibdir.o \
	ctxt/flags_altivec.o ctxt/flags_math.o ctxt/flags_sse.o \
	ctxt/flags_sse2.o ctxt/flags_sse3.o ctxt/incdir.o ctxt/libs_math.o \
	ctxt/repos.o ctxt/slibdir.o ctxt/version.o 

ctxt/dlibdir.c: mk-ctxt conf-dlibdir
	rm -f ctxt/dlibdir.c
	./mk-ctxt ctxt_dlibdir < conf-dlibdir > ctxt/dlibdir.c

ctxt/dlibdir.o:\
cc-compile ctxt/dlibdir.c 
	./cc-compile ctxt/dlibdir.c

ctxt/flags_altivec.c: mk-ctxt flags-altivec
	rm -f ctxt/flags_altivec.c
	./mk-ctxt ctxt_flags_altivec < flags-altivec > ctxt/flags_altivec.c

ctxt/flags_altivec.o:\
cc-compile ctxt/flags_altivec.c 
	./cc-compile ctxt/flags_altivec.c

ctxt/flags_math.c: mk-ctxt flags-math
	rm -f ctxt/flags_math.c
	./mk-ctxt ctxt_flags_math < flags-math > ctxt/flags_math.c

ctxt/flags_math.o:\
cc-compile ctxt/flags_math.c 
	./cc-compile ctxt/flags_math.c

ctxt/flags_sse.c: mk-ctxt flags-sse
	rm -f ctxt/flags_sse.c
	./mk-ctxt ctxt_flags_sse < flags-sse > ctxt/flags_sse.c

ctxt/flags_sse.o:\
cc-compile ctxt/flags_sse.c 
	./cc-compile ctxt/flags_sse.c

ctxt/flags_sse2.c: mk-ctxt flags-sse2
	rm -f ctxt/flags_sse2.c
	./mk-ctxt ctxt_flags_sse2 < flags-sse2 > ctxt/flags_sse2.c

ctxt/flags_sse2.o:\
cc-compile ctxt/flags_sse2.c 
	./cc-compile ctxt/flags_sse2.c

ctxt/flags_sse3.c: mk-ctxt flags-sse3
	rm -f ctxt/flags_sse3.c
	./mk-ctxt ctxt_flags_sse3 < flags-sse3 > ctxt/flags_sse3.c

ctxt/flags_sse3.o:\
cc-compile ctxt/flags_sse3.c 
	./cc-compile ctxt/flags_sse3.c

ctxt/incdir.c: mk-ctxt conf-incdir
	rm -f ctxt/incdir.c
	./mk-ctxt ctxt_incdir < conf-incdir > ctxt/incdir.c

ctxt/incdir.o:\
cc-compile ctxt/incdir.c 
	./cc-compile ctxt/incdir.c

ctxt/libs_math.c: mk-ctxt libs-math
	rm -f ctxt/libs_math.c
	./mk-ctxt ctxt_libs_math < libs-math > ctxt/libs_math.c

ctxt/libs_math.o:\
cc-compile ctxt/libs_math.c 
	./cc-compile ctxt/libs_math.c

ctxt/repos.c: mk-ctxt conf-repos
	rm -f ctxt/repos.c
	./mk-ctxt ctxt_repos < conf-repos > ctxt/repos.c

ctxt/repos.o:\
cc-compile ctxt/repos.c 
	./cc-compile ctxt/repos.c

ctxt/slibdir.c: mk-ctxt conf-slibdir
	rm -f ctxt/slibdir.c
	./mk-ctxt ctxt_slibdir < conf-slibdir > ctxt/slibdir.c

ctxt/slibdir.o:\
cc-compile ctxt/slibdir.c 
	./cc-compile ctxt/slibdir.c

ctxt/version.c: mk-ctxt VERSION
	rm -f ctxt/version.c
	./mk-ctxt ctxt_version < VERSION > ctxt/version.c

ctxt/version.o:\
cc-compile ctxt/version.c 
	./cc-compile ctxt/version.c

deinstaller:\
cc-link deinstaller.ld deinstaller.o insthier.o install_core.o \
install_error.o ctxt/ctxt.a 
	./cc-link deinstaller deinstaller.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 

deinstaller.o:\
cc-compile deinstaller.c install.h 
	./cc-compile deinstaller.c

inst-check:\
cc-link inst-check.ld inst-check.o install_error.o 
	./cc-link inst-check inst-check.o install_error.o 

inst-check.o:\
cc-compile inst-check.c install.h 
	./cc-compile inst-check.c

inst-copy:\
cc-link inst-copy.ld inst-copy.o install_error.o 
	./cc-link inst-copy inst-copy.o install_error.o 

inst-copy.o:\
cc-compile inst-copy.c install.h 
	./cc-compile inst-copy.c

inst-dir:\
cc-link inst-dir.ld inst-dir.o install_error.o 
	./cc-link inst-dir inst-dir.o install_error.o 

inst-dir.o:\
cc-compile inst-dir.c install.h 
	./cc-compile inst-dir.c

inst-link:\
cc-link inst-link.ld inst-link.o install_error.o 
	./cc-link inst-link inst-link.o install_error.o 

inst-link.o:\
cc-compile inst-link.c install.h 
	./cc-compile inst-link.c

install_core.o:\
cc-compile install_core.c install.h 
	./cc-compile install_core.c

install_error.o:\
cc-compile install_error.c install.h 
	./cc-compile install_error.c

installer:\
cc-link installer.ld installer.o insthier.o install_core.o install_error.o \
ctxt/ctxt.a 
	./cc-link installer installer.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 

installer.o:\
cc-compile installer.c install.h 
	./cc-compile installer.c

instchk:\
cc-link instchk.ld instchk.o insthier.o install_core.o install_error.o \
ctxt/ctxt.a 
	./cc-link instchk instchk.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 

instchk.o:\
cc-compile instchk.c install.h 
	./cc-compile instchk.c

insthier.o:\
cc-compile insthier.c ctxt.h install.h 
	./cc-compile insthier.c

mk-cctype:\
conf-cc conf-systype 

mk-ctxt:\
mk-mk-ctxt 
	./mk-mk-ctxt

mk-ldtype:\
conf-cctype conf-systype 

mk-mk-ctxt:\
conf-cc 

mk-sosuffix:\
conf-systype 

mk-systype:\
conf-cc 

sysinfo.h:\
_sysinfo.h 

t1.o:\
cc-compile t1.c 
	./cc-compile t1.c

v_abs.o:\
cc-compile v_abs.c v_abs.h v_align.h v_simd.h v_inline.h v_math.h \
v_abs_sse.c v_abs_sse2.c v_abs_alti.c 
	./cc-compile v_abs.c

v_abs_alti.o:\
cc-compile v_abs_alti.c 
	./cc-compile v_abs_alti.c

v_abs_sse.o:\
cc-compile v_abs_sse.c v_abs.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_abs_sse.c

v_abs_sse2.o:\
cc-compile v_abs_sse2.c v_abs.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_abs_sse2.c

v_add.o:\
cc-compile v_add.c v_add.h v_align.h v_simd.h v_inline.h v_add_sse.c \
v_add_sse2.c v_add_alti.c 
	./cc-compile v_add.c

v_add_alti.o:\
cc-compile v_add_alti.c v_add.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_add_alti.c

v_add_sse.o:\
cc-compile v_add_sse.c v_add.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_add_sse.c

v_add_sse2.o:\
cc-compile v_add_sse2.c v_add.h v_align.h v_simd.h 
	./cc-compile v_add_sse2.c

v_addsc.o:\
cc-compile v_addsc.c v_addsc.h v_align.h v_simd.h v_types.h v_inline.h \
v_addsc_sse.c v_addsc_sse2.c v_addsc_alti.c 
	./cc-compile v_addsc.c

v_addsc_alti.o:\
cc-compile v_addsc_alti.c v_addsc.h v_align.h v_simd.h v_types.h v_inline.h 
	./cc-compile v_addsc_alti.c

v_addsc_sse.o:\
cc-compile v_addsc_sse.c v_addsc.h v_align.h v_simd.h v_types.h v_inline.h 
	./cc-compile v_addsc_sse.c

v_addsc_sse2.o:\
cc-compile v_addsc_sse2.c v_addsc.h v_align.h v_simd.h v_types.h v_inline.h 
	./cc-compile v_addsc_sse2.c

v_align.h:\
_sd-ptr_uint.h 

v_align.o:\
cc-compile v_align.c v_align.h v_inline.h _sd-ptr_uint.h 
	./cc-compile v_align.c

v_angle.o:\
cc-compile v_angle.c v_math.h v_dotp.h v_mag.h v_angle.h 
	./cc-compile v_angle.c

v_anglen.o:\
cc-compile v_anglen.c v_math.h v_dotp.h v_anglen.h 
	./cc-compile v_anglen.c

v_assi.o:\
cc-compile v_assi.c v_assi.h v_align.h v_simd.h v_inline.h v_assi_sse.c \
v_assi_sse2.c v_assi_alti.c 
	./cc-compile v_assi.c

v_assi_alti.o:\
cc-compile v_assi_alti.c v_assi.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_assi_alti.c

v_assi_sse.o:\
cc-compile v_assi_sse.c v_assi.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_assi_sse.c

v_assi_sse2.o:\
cc-compile v_assi_sse2.c v_assi.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_assi_sse2.c

v_degree.o:\
cc-compile v_degree.c v_math.h v_angle.h v_degree.h 
	./cc-compile v_degree.c

v_degreen.o:\
cc-compile v_degreen.c v_math.h v_angle.h v_anglen.h v_degreen.h 
	./cc-compile v_degreen.c

v_dist.o:\
cc-compile v_dist.c v_dist.h 
	./cc-compile v_dist.c

v_div.o:\
cc-compile v_div.c v_div.h v_align.h v_simd.h v_div_sse.c v_div_sse2.c \
v_div_alti.c 
	./cc-compile v_div.c

v_div_alti.o:\
cc-compile v_div_alti.c v_div.h v_align.h v_simd.h 
	./cc-compile v_div_alti.c

v_div_sse.o:\
cc-compile v_div_sse.c v_div.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_div_sse.c

v_div_sse2.o:\
cc-compile v_div_sse2.c v_div.h v_align.h v_simd.h 
	./cc-compile v_div_sse2.c

v_divsc.o:\
cc-compile v_divsc.c v_align.h v_divsc.h v_simd.h v_types.h v_divsc_sse.c \
v_divsc_sse2.c v_divsc_alti.c 
	./cc-compile v_divsc.c

v_divsc_alti.o:\
cc-compile v_divsc_alti.c v_align.h v_divsc.h v_simd.h v_types.h 
	./cc-compile v_divsc_alti.c

v_divsc_sse.o:\
cc-compile v_divsc_sse.c v_divsc.h v_align.h v_simd.h v_types.h v_inline.h 
	./cc-compile v_divsc_sse.c

v_divsc_sse2.o:\
cc-compile v_divsc_sse2.c v_align.h v_divsc.h v_simd.h v_types.h 
	./cc-compile v_divsc_sse2.c

v_dotp.o:\
cc-compile v_dotp.c v_align.h v_dotp.h v_types.h v_simd.h v_dotp_sse.c \
v_dotp_sse2.c v_dotp_sse3.c v_dotp_alti.c 
	./cc-compile v_dotp.c

v_dotp_alti.o:\
cc-compile v_dotp_alti.c v_align.h v_dotp.h v_types.h v_simd.h 
	./cc-compile v_dotp_alti.c

v_dotp_sse.o:\
cc-compile v_dotp_sse.c v_align.h v_dotp.h v_types.h v_simd.h 
	./cc-compile v_dotp_sse.c

v_dotp_sse2.o:\
cc-compile v_dotp_sse2.c v_align.h v_dotp.h v_types.h v_simd.h 
	./cc-compile v_dotp_sse2.c

v_dotp_sse3.o:\
cc-compile v_dotp_sse3.c v_align.h v_dotp.h v_types.h v_simd.h 
	./cc-compile v_dotp_sse3.c

v_inline.h:\
_sd_inline.h 

v_mag.o:\
cc-compile v_mag.c v_math.h v_mag.h v_dotp.h v_simd.h 
	./cc-compile v_mag.c

v_math.h:\
_sd_math.h 

v_math.o:\
cc-compile v_math.c v_math.h 
	./cc-compile v_math.c

v_mult.o:\
cc-compile v_mult.c v_align.h v_mult.h v_simd.h v_mult_sse.c v_mult_alti.c 
	./cc-compile v_mult.c

v_mult_alti.o:\
cc-compile v_mult_alti.c v_align.h v_mult.h v_simd.h 
	./cc-compile v_mult_alti.c

v_mult_sse.o:\
cc-compile v_mult_sse.c v_mult.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_mult_sse.c

v_multsc.o:\
cc-compile v_multsc.c v_align.h v_multsc.h v_simd.h v_types.h v_multsc_sse.c \
v_multsc_sse2.c v_multsc_alti.c 
	./cc-compile v_multsc.c

v_multsc_alti.o:\
cc-compile v_multsc_alti.c v_align.h v_multsc.h v_simd.h v_types.h 
	./cc-compile v_multsc_alti.c

v_multsc_sse.o:\
cc-compile v_multsc_sse.c v_multsc.h v_align.h v_simd.h v_types.h v_inline.h 
	./cc-compile v_multsc_sse.c

v_multsc_sse2.o:\
cc-compile v_multsc_sse2.c v_align.h v_multsc.h v_simd.h v_types.h 
	./cc-compile v_multsc_sse2.c

v_nega.o:\
cc-compile v_nega.c v_align.h v_nega.h v_simd.h v_types.h v_nega_sse.c \
v_nega_sse2.c v_nega_alti.c 
	./cc-compile v_nega.c

v_nega_alti.o:\
cc-compile v_nega_alti.c v_align.h v_nega.h v_simd.h v_types.h 
	./cc-compile v_nega_alti.c

v_nega_sse.o:\
cc-compile v_nega_sse.c v_nega.h v_align.h v_simd.h v_types.h v_inline.h 
	./cc-compile v_nega_sse.c

v_nega_sse2.o:\
cc-compile v_nega_sse2.c v_align.h v_nega.h v_simd.h v_types.h 
	./cc-compile v_nega_sse2.c

v_norm.o:\
cc-compile v_norm.c v_dotp.h v_norm.h v_multsc.h v_simd.h v_types.h v_math.h 
	./cc-compile v_norm.c

v_simd.h:\
sysinfo.h 

v_simd.o:\
cc-compile v_simd.c v_inline.h v_simd.h 
	./cc-compile v_simd.c

v_sub.o:\
cc-compile v_sub.c v_align.h v_sub.h v_simd.h v_sub_sse.c v_sub_sse2.c \
v_sub_alti.c 
	./cc-compile v_sub.c

v_sub_alti.o:\
cc-compile v_sub_alti.c v_align.h v_sub.h v_simd.h 
	./cc-compile v_sub_alti.c

v_sub_sse.o:\
cc-compile v_sub_sse.c v_sub.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_sub_sse.c

v_sub_sse2.o:\
cc-compile v_sub_sse2.c v_align.h v_sub.h v_simd.h 
	./cc-compile v_sub_sse2.c

v_subsc.o:\
cc-compile v_subsc.c v_align.h v_subsc.h v_simd.h v_types.h v_subsc_sse.c \
v_subsc_sse2.c v_subsc_alti.c 
	./cc-compile v_subsc.c

v_subsc_alti.o:\
cc-compile v_subsc_alti.c v_align.h v_subsc.h v_simd.h v_types.h 
	./cc-compile v_subsc_alti.c

v_subsc_sse.o:\
cc-compile v_subsc_sse.c v_subsc.h v_align.h v_simd.h v_types.h v_inline.h 
	./cc-compile v_subsc_sse.c

v_subsc_sse2.o:\
cc-compile v_subsc_sse2.c v_align.h v_subsc.h v_simd.h v_types.h 
	./cc-compile v_subsc_sse2.c

v_types.h:\
v_simd.h 

v_xprod.o:\
cc-compile v_xprod.c v_xprod.h 
	./cc-compile v_xprod.c

v_zero.o:\
cc-compile v_zero.c v_align.h v_zero.h v_simd.h v_zero_sse.c v_zero_sse2.c \
v_zero_alti.c 
	./cc-compile v_zero.c

v_zero_alti.o:\
cc-compile v_zero_alti.c v_align.h v_zero.h v_simd.h 
	./cc-compile v_zero_alti.c

v_zero_sse.o:\
cc-compile v_zero_sse.c v_zero.h v_align.h v_simd.h v_inline.h 
	./cc-compile v_zero_sse.c

v_zero_sse2.o:\
cc-compile v_zero_sse2.c v_align.h v_zero.h v_simd.h 
	./cc-compile v_zero_sse2.c

vector-conf:\
cc-link vector-conf.ld vector-conf.o ctxt/ctxt.a 
	./cc-link vector-conf vector-conf.o ctxt/ctxt.a 

vector-conf.o:\
cc-compile vector-conf.c ctxt.h 
	./cc-compile vector-conf.c

vector.a:\
cc-slib vector.sld v_abs.o v_add.o v_addsc.o v_align.o v_angle.o v_anglen.o \
v_assi.o v_degree.o v_degreen.o v_dist.o v_div.o v_divsc.o v_dotp.o v_mag.o \
v_math.o v_mult.o v_multsc.o v_nega.o v_norm.o v_simd.o v_sub.o v_subsc.o \
v_xprod.o v_zero.o 
	./cc-slib vector v_abs.o v_add.o v_addsc.o v_align.o v_angle.o \
	v_anglen.o v_assi.o v_degree.o v_degreen.o v_dist.o v_div.o \
	v_divsc.o v_dotp.o v_mag.o v_math.o v_mult.o v_multsc.o v_nega.o \
	v_norm.o v_simd.o v_sub.o v_subsc.o v_xprod.o v_zero.o 

vector.h:\
v_abs.h v_add.h v_addsc.h v_angle.h v_anglen.h v_assi.h v_dist.h v_div.h \
v_divsc.h v_dotp.h v_mag.h v_mult.h v_multsc.h v_nega.h v_norm.h v_sub.h \
v_subsc.h v_xprod.h v_zero.h v_types.h 

clean-all: sysdeps_clean tests_clean obj_clean 
clean: obj_clean
obj_clean: 
	rm -f UNIT_TESTS/t_abs1 UNIT_TESTS/t_abs1.o UNIT_TESTS/t_abs2 \
	UNIT_TESTS/t_abs2.o UNIT_TESTS/t_abs_data.o UNIT_TESTS/t_add1 \
	UNIT_TESTS/t_add1.o UNIT_TESTS/t_add2 UNIT_TESTS/t_add2.o \
	UNIT_TESTS/t_add_data.o UNIT_TESTS/t_addsc1 UNIT_TESTS/t_addsc1.o \
	UNIT_TESTS/t_addsc2 UNIT_TESTS/t_addsc2.o UNIT_TESTS/t_addsc_data.o \
	UNIT_TESTS/t_align1 UNIT_TESTS/t_align1.o UNIT_TESTS/t_assign \
	UNIT_TESTS/t_assign.o UNIT_TESTS/t_assign_data.o UNIT_TESTS/t_div1 \
	UNIT_TESTS/t_div1.o UNIT_TESTS/t_div2 UNIT_TESTS/t_div2.o \
	UNIT_TESTS/t_div_data.o UNIT_TESTS/t_divsc1 UNIT_TESTS/t_divsc1.o \
	UNIT_TESTS/t_divsc2 UNIT_TESTS/t_divsc2.o UNIT_TESTS/t_divsc_data.o \
	UNIT_TESTS/t_dotp_data.o UNIT_TESTS/t_dotprod UNIT_TESTS/t_dotprod.o \
	UNIT_TESTS/t_mag1 UNIT_TESTS/t_mag1.o UNIT_TESTS/t_mag_data.o \
	UNIT_TESTS/t_mult1 UNIT_TESTS/t_mult1.o UNIT_TESTS/t_mult2 \
	UNIT_TESTS/t_mult2.o UNIT_TESTS/t_mult_data.o UNIT_TESTS/t_multsc1 \
	UNIT_TESTS/t_multsc1.o UNIT_TESTS/t_multsc2 UNIT_TESTS/t_multsc2.o \
	UNIT_TESTS/t_multsc_data.o UNIT_TESTS/t_nega1 UNIT_TESTS/t_nega1.o \
	UNIT_TESTS/t_nega2 UNIT_TESTS/t_nega2.o UNIT_TESTS/t_nega_data.o \
	UNIT_TESTS/t_norm1 UNIT_TESTS/t_norm1.o UNIT_TESTS/t_norm2 \
	UNIT_TESTS/t_norm2.o UNIT_TESTS/t_norm_data.o UNIT_TESTS/t_sub1 \
	UNIT_TESTS/t_sub1.o UNIT_TESTS/t_sub2 UNIT_TESTS/t_sub2.o \
	UNIT_TESTS/t_sub_data.o UNIT_TESTS/t_subsc1 UNIT_TESTS/t_subsc1.o \
	UNIT_TESTS/t_subsc2 
	rm -f UNIT_TESTS/t_subsc2.o UNIT_TESTS/t_subsc_data.o \
	UNIT_TESTS/t_util.a UNIT_TESTS/t_util.o UNIT_TESTS/t_xprod \
	UNIT_TESTS/t_xprod.o UNIT_TESTS/t_zero UNIT_TESTS/t_zero.o \
	UNIT_TESTS/t_zero_data.o conf-cctype conf-ldtype conf-systype \
	ctxt/bindir.c ctxt/bindir.o ctxt/ctxt.a ctxt/dlibdir.c \
	ctxt/dlibdir.o ctxt/flags_altivec.c ctxt/flags_altivec.o \
	ctxt/flags_math.c ctxt/flags_math.o ctxt/flags_sse.c \
	ctxt/flags_sse.o ctxt/flags_sse2.c ctxt/flags_sse2.o \
	ctxt/flags_sse3.c ctxt/flags_sse3.o ctxt/incdir.c ctxt/incdir.o \
	ctxt/libs_math.c ctxt/libs_math.o ctxt/repos.c ctxt/repos.o \
	ctxt/slibdir.c ctxt/slibdir.o ctxt/version.c ctxt/version.o \
	deinstaller deinstaller.o inst-check inst-check.o inst-copy \
	inst-copy.o inst-dir inst-dir.o inst-link inst-link.o install_core.o \
	install_error.o installer installer.o instchk instchk.o insthier.o \
	mk-ctxt t1.o v_abs.o v_abs_alti.o v_abs_sse.o v_abs_sse2.o v_add.o \
	v_add_alti.o v_add_sse.o v_add_sse2.o 
	rm -f v_addsc.o v_addsc_alti.o v_addsc_sse.o v_addsc_sse2.o \
	v_align.o v_angle.o v_anglen.o v_assi.o v_assi_alti.o v_assi_sse.o \
	v_assi_sse2.o v_degree.o v_degreen.o v_dist.o v_div.o v_div_alti.o \
	v_div_sse.o v_div_sse2.o v_divsc.o v_divsc_alti.o v_divsc_sse.o \
	v_divsc_sse2.o v_dotp.o v_dotp_alti.o v_dotp_sse.o v_dotp_sse2.o \
	v_dotp_sse3.o v_mag.o v_math.o v_mult.o v_mult_alti.o v_mult_sse.o \
	v_multsc.o v_multsc_alti.o v_multsc_sse.o v_multsc_sse2.o v_nega.o \
	v_nega_alti.o v_nega_sse.o v_nega_sse2.o v_norm.o v_simd.o v_sub.o \
	v_sub_alti.o v_sub_sse.o v_sub_sse2.o v_subsc.o v_subsc_alti.o \
	v_subsc_sse.o v_subsc_sse2.o v_xprod.o v_zero.o v_zero_alti.o \
	v_zero_sse.o v_zero_sse2.o vector-conf vector-conf.o vector.a 

deinstall: deinstaller inst-check inst-copy inst-dir inst-link
	./deinstaller
deinstall-dryrun: deinstaller inst-check inst-copy inst-dir inst-link
	./deinstaller dryrun
install: installer inst-check inst-copy inst-dir inst-link postinstall
	./installer
	./postinstall

install-dryrun: installer inst-check inst-copy inst-dir inst-link
	./installer dryrun
install-check: instchk inst-check
	./instchk
tests:
	(cd UNIT_TESTS && make tests)
tests_clean:
	(cd UNIT_TESTS && make clean)
regen:
	cpj-genmk > Makefile.tmp && mv Makefile.tmp Makefile

