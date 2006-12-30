# auto generated - do not edit

default: all

all:\
	UNIT_TESTS/t_add1 UNIT_TESTS/t_add2 UNIT_TESTS/t_addsc1 \
	UNIT_TESTS/t_addsc2 UNIT_TESTS/t_assign UNIT_TESTS/t_div1 \
	UNIT_TESTS/t_div2 UNIT_TESTS/t_divsc1 UNIT_TESTS/t_divsc2 \
	UNIT_TESTS/t_dotprod UNIT_TESTS/t_mag1 UNIT_TESTS/t_mult1 \
	UNIT_TESTS/t_mult2 UNIT_TESTS/t_multsc1 UNIT_TESTS/t_multsc2 \
	UNIT_TESTS/t_nega1 UNIT_TESTS/t_nega2 UNIT_TESTS/t_norm1 \
	UNIT_TESTS/t_norm2 UNIT_TESTS/t_sub1 UNIT_TESTS/t_sub2 \
	UNIT_TESTS/t_subsc1 UNIT_TESTS/t_subsc2 UNIT_TESTS/t_util.a \
	UNIT_TESTS/t_xprod UNIT_TESTS/t_zero ctxt/ctxt.a deinstaller \
	inst-check inst-copy inst-dir inst-link installer instchk vector.a 

UNIT_TESTS/t_add1:\
	ld UNIT_TESTS/t_add1.ld UNIT_TESTS/t_add1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_add1 UNIT_TESTS/t_add1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_add1.o:\
	cc UNIT_TESTS/t_add1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_add1.c
UNIT_TESTS/t_add2:\
	ld UNIT_TESTS/t_add2.ld UNIT_TESTS/t_add2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_add2 UNIT_TESTS/t_add2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_add2.o:\
	cc UNIT_TESTS/t_add2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_add2.c
UNIT_TESTS/t_addsc1:\
	ld UNIT_TESTS/t_addsc1.ld UNIT_TESTS/t_addsc1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_addsc1 UNIT_TESTS/t_addsc1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_addsc1.o:\
	cc UNIT_TESTS/t_addsc1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_addsc1.c
UNIT_TESTS/t_addsc2:\
	ld UNIT_TESTS/t_addsc2.ld UNIT_TESTS/t_addsc2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_addsc2 UNIT_TESTS/t_addsc2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_addsc2.o:\
	cc UNIT_TESTS/t_addsc2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_addsc2.c
UNIT_TESTS/t_assign:\
	ld UNIT_TESTS/t_assign.ld UNIT_TESTS/t_assign.o vector.a 
	./ld UNIT_TESTS/t_assign UNIT_TESTS/t_assign.o vector.a 
UNIT_TESTS/t_assign.o:\
	cc UNIT_TESTS/t_assign.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_assign.c
UNIT_TESTS/t_div1:\
	ld UNIT_TESTS/t_div1.ld UNIT_TESTS/t_div1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_div1 UNIT_TESTS/t_div1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_div1.o:\
	cc UNIT_TESTS/t_div1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_div1.c
UNIT_TESTS/t_div2:\
	ld UNIT_TESTS/t_div2.ld UNIT_TESTS/t_div2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_div2 UNIT_TESTS/t_div2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_div2.o:\
	cc UNIT_TESTS/t_div2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_div2.c
UNIT_TESTS/t_divsc1:\
	ld UNIT_TESTS/t_divsc1.ld UNIT_TESTS/t_divsc1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_divsc1 UNIT_TESTS/t_divsc1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_divsc1.o:\
	cc UNIT_TESTS/t_divsc1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_divsc1.c
UNIT_TESTS/t_divsc2:\
	ld UNIT_TESTS/t_divsc2.ld UNIT_TESTS/t_divsc2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_divsc2 UNIT_TESTS/t_divsc2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_divsc2.o:\
	cc UNIT_TESTS/t_divsc2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_divsc2.c
UNIT_TESTS/t_dotprod:\
	ld UNIT_TESTS/t_dotprod.ld UNIT_TESTS/t_dotprod.o \
	UNIT_TESTS/t_util.a vector.a 
	./ld UNIT_TESTS/t_dotprod UNIT_TESTS/t_dotprod.o \
	UNIT_TESTS/t_util.a vector.a 
UNIT_TESTS/t_dotprod.o:\
	cc UNIT_TESTS/t_dotprod.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_dotprod.c
UNIT_TESTS/t_mag1:\
	ld UNIT_TESTS/t_mag1.ld UNIT_TESTS/t_mag1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_mag1 UNIT_TESTS/t_mag1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_mag1.o:\
	cc UNIT_TESTS/t_mag1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_mag1.c
UNIT_TESTS/t_mult1:\
	ld UNIT_TESTS/t_mult1.ld UNIT_TESTS/t_mult1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_mult1 UNIT_TESTS/t_mult1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_mult1.o:\
	cc UNIT_TESTS/t_mult1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_mult1.c
UNIT_TESTS/t_mult2:\
	ld UNIT_TESTS/t_mult2.ld UNIT_TESTS/t_mult2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_mult2 UNIT_TESTS/t_mult2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_mult2.o:\
	cc UNIT_TESTS/t_mult2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_mult2.c
UNIT_TESTS/t_multsc1:\
	ld UNIT_TESTS/t_multsc1.ld UNIT_TESTS/t_multsc1.o \
	UNIT_TESTS/t_util.a vector.a 
	./ld UNIT_TESTS/t_multsc1 UNIT_TESTS/t_multsc1.o \
	UNIT_TESTS/t_util.a vector.a 
UNIT_TESTS/t_multsc1.o:\
	cc UNIT_TESTS/t_multsc1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_multsc1.c
UNIT_TESTS/t_multsc2:\
	ld UNIT_TESTS/t_multsc2.ld UNIT_TESTS/t_multsc2.o \
	UNIT_TESTS/t_util.a vector.a 
	./ld UNIT_TESTS/t_multsc2 UNIT_TESTS/t_multsc2.o \
	UNIT_TESTS/t_util.a vector.a 
UNIT_TESTS/t_multsc2.o:\
	cc UNIT_TESTS/t_multsc2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_multsc2.c
UNIT_TESTS/t_nega1:\
	ld UNIT_TESTS/t_nega1.ld UNIT_TESTS/t_nega1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_nega1 UNIT_TESTS/t_nega1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_nega1.o:\
	cc UNIT_TESTS/t_nega1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_nega1.c
UNIT_TESTS/t_nega2:\
	ld UNIT_TESTS/t_nega2.ld UNIT_TESTS/t_nega2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_nega2 UNIT_TESTS/t_nega2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_nega2.o:\
	cc UNIT_TESTS/t_nega2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_nega2.c
UNIT_TESTS/t_norm1:\
	ld UNIT_TESTS/t_norm1.ld UNIT_TESTS/t_norm1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_norm1 UNIT_TESTS/t_norm1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_norm1.o:\
	cc UNIT_TESTS/t_norm1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_norm1.c
UNIT_TESTS/t_norm2:\
	ld UNIT_TESTS/t_norm2.ld UNIT_TESTS/t_norm2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_norm2 UNIT_TESTS/t_norm2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_norm2.o:\
	cc UNIT_TESTS/t_norm2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_norm2.c
UNIT_TESTS/t_sub1:\
	ld UNIT_TESTS/t_sub1.ld UNIT_TESTS/t_sub1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_sub1 UNIT_TESTS/t_sub1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_sub1.o:\
	cc UNIT_TESTS/t_sub1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_sub1.c
UNIT_TESTS/t_sub2:\
	ld UNIT_TESTS/t_sub2.ld UNIT_TESTS/t_sub2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_sub2 UNIT_TESTS/t_sub2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_sub2.o:\
	cc UNIT_TESTS/t_sub2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_sub2.c
UNIT_TESTS/t_subsc1:\
	ld UNIT_TESTS/t_subsc1.ld UNIT_TESTS/t_subsc1.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_subsc1 UNIT_TESTS/t_subsc1.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_subsc1.o:\
	cc UNIT_TESTS/t_subsc1.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_subsc1.c
UNIT_TESTS/t_subsc2:\
	ld UNIT_TESTS/t_subsc2.ld UNIT_TESTS/t_subsc2.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_subsc2 UNIT_TESTS/t_subsc2.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_subsc2.o:\
	cc UNIT_TESTS/t_subsc2.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_subsc2.c
UNIT_TESTS/t_util.a:\
	mk-slib UNIT_TESTS/t_util.sld UNIT_TESTS/t_util.o 
	./mk-slib UNIT_TESTS/t_util UNIT_TESTS/t_util.o 
UNIT_TESTS/t_util.o:\
	cc UNIT_TESTS/t_util.c UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_util.c
UNIT_TESTS/t_xprod:\
	ld UNIT_TESTS/t_xprod.ld UNIT_TESTS/t_xprod.o UNIT_TESTS/t_util.a \
	vector.a 
	./ld UNIT_TESTS/t_xprod UNIT_TESTS/t_xprod.o UNIT_TESTS/t_util.a \
	vector.a 
UNIT_TESTS/t_xprod.o:\
	cc UNIT_TESTS/t_xprod.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_xprod.c
UNIT_TESTS/t_zero:\
	ld UNIT_TESTS/t_zero.ld UNIT_TESTS/t_zero.o vector.a 
	./ld UNIT_TESTS/t_zero UNIT_TESTS/t_zero.o vector.a 
UNIT_TESTS/t_zero.o:\
	cc UNIT_TESTS/t_zero.c vector.h UNIT_TESTS/t_util.h 
	./cc UNIT_TESTS/t_zero.c
cc: conf-cc conf-cctype conf-cflags 
conf-cctype:\
	conf-systype conf-cc mk-cctype 
	./mk-cctype > conf-cctype
conf-sosuffix:\
	mk-sosuffix 
	./mk-sosuffix > conf-sosuffix
conf-systype:\
	mk-systype 
	./mk-systype > conf-systype
ctxt/bindir.c: mk-ctxt conf-bindir
	rm -f ctxt/bindir.c
	./mk-ctxt ctxt_bindir < conf-bindir > ctxt/bindir.c

ctxt/bindir.o:\
	cc ctxt/bindir.c 
	./cc ctxt/bindir.c
ctxt/ctxt.a:\
	mk-slib ctxt/ctxt.sld ctxt/bindir.o ctxt/dlibdir.o ctxt/incdir.o \
	ctxt/repos.o ctxt/slibdir.o ctxt/version.o 
	./mk-slib ctxt/ctxt ctxt/bindir.o ctxt/dlibdir.o ctxt/incdir.o \
	ctxt/repos.o ctxt/slibdir.o ctxt/version.o 
ctxt/dlibdir.c: mk-ctxt conf-dlibdir
	rm -f ctxt/dlibdir.c
	./mk-ctxt ctxt_dlibdir < conf-dlibdir > ctxt/dlibdir.c

ctxt/dlibdir.o:\
	cc ctxt/dlibdir.c 
	./cc ctxt/dlibdir.c
ctxt/incdir.c: mk-ctxt conf-incdir
	rm -f ctxt/incdir.c
	./mk-ctxt ctxt_incdir < conf-incdir > ctxt/incdir.c

ctxt/incdir.o:\
	cc ctxt/incdir.c 
	./cc ctxt/incdir.c
ctxt/repos.c: mk-ctxt conf-repos
	rm -f ctxt/repos.c
	./mk-ctxt ctxt_repos < conf-repos > ctxt/repos.c

ctxt/repos.o:\
	cc ctxt/repos.c 
	./cc ctxt/repos.c
ctxt/slibdir.c: mk-ctxt conf-slibdir
	rm -f ctxt/slibdir.c
	./mk-ctxt ctxt_slibdir < conf-slibdir > ctxt/slibdir.c

ctxt/slibdir.o:\
	cc ctxt/slibdir.c 
	./cc ctxt/slibdir.c
ctxt/version.c: mk-ctxt VERSION
	rm -f ctxt/version.c
	./mk-ctxt ctxt_version < VERSION > ctxt/version.c

ctxt/version.o:\
	cc ctxt/version.c 
	./cc ctxt/version.c
deinstaller:\
	ld deinstaller.ld deinstaller.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
	./ld deinstaller deinstaller.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
deinstaller.o:\
	cc deinstaller.c install.h 
	./cc deinstaller.c
inst-check:\
	ld inst-check.ld inst-check.o install_error.o 
	./ld inst-check inst-check.o install_error.o 
inst-check.o:\
	cc inst-check.c install.h 
	./cc inst-check.c
inst-copy:\
	ld inst-copy.ld inst-copy.o install_error.o 
	./ld inst-copy inst-copy.o install_error.o 
inst-copy.o:\
	cc inst-copy.c install.h 
	./cc inst-copy.c
inst-dir:\
	ld inst-dir.ld inst-dir.o install_error.o 
	./ld inst-dir inst-dir.o install_error.o 
inst-dir.o:\
	cc inst-dir.c install.h 
	./cc inst-dir.c
inst-link:\
	ld inst-link.ld inst-link.o install_error.o 
	./ld inst-link inst-link.o install_error.o 
inst-link.o:\
	cc inst-link.c install.h 
	./cc inst-link.c
install_core.o:\
	cc install_core.c install.h 
	./cc install_core.c
install_error.o:\
	cc install_error.c install.h 
	./cc install_error.c
installer:\
	ld installer.ld installer.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
	./ld installer installer.o insthier.o install_core.o \
	install_error.o ctxt/ctxt.a 
installer.o:\
	cc installer.c install.h 
	./cc installer.c
instchk:\
	ld instchk.ld instchk.o insthier.o install_core.o install_error.o \
	ctxt/ctxt.a 
	./ld instchk instchk.o insthier.o install_core.o install_error.o \
	ctxt/ctxt.a 
instchk.o:\
	cc instchk.c install.h 
	./cc instchk.c
insthier.o:\
	cc insthier.c ctxt.h install.h 
	./cc insthier.c
ld: conf-ld libs-sysmath 
mk-cctype: conf-cc conf-systype 
mk-ctxt.o:\
	cc mk-ctxt.c
	./cc mk-ctxt.c
mk-ctxt:\
	ld mk-ctxt.o mk-ctxt.ld
	./ld mk-ctxt mk-ctxt.o
mk-slib: conf-systype 
mk-sosuffix: conf-systype 
vec_add.o:\
	cc vec_add.c vector.h vec_add.h 
	./cc vec_add.c
vec_addsc.o:\
	cc vec_addsc.c vector.h vec_addsc.h 
	./cc vec_addsc.c
vec_angle.o:\
	cc vec_angle.c vector.h 
	./cc vec_angle.c
vec_anglen.o:\
	cc vec_anglen.c vector.h 
	./cc vec_anglen.c
vec_assi.o:\
	cc vec_assi.c vector.h vec_assi.h 
	./cc vec_assi.c
vec_dist.o:\
	cc vec_dist.c vector.h 
	./cc vec_dist.c
vec_div.o:\
	cc vec_div.c vector.h vec_div.h 
	./cc vec_div.c
vec_divsc.o:\
	cc vec_divsc.c vector.h vec_divsc.h 
	./cc vec_divsc.c
vec_dotp.o:\
	cc vec_dotp.c vector.h vec_dotp.h 
	./cc vec_dotp.c
vec_mag.o:\
	cc vec_mag.c vector.h 
	./cc vec_mag.c
vec_mult.o:\
	cc vec_mult.c vector.h vec_mult.h 
	./cc vec_mult.c
vec_multsc.o:\
	cc vec_multsc.c vector.h vec_multsc.h 
	./cc vec_multsc.c
vec_nega.o:\
	cc vec_nega.c vector.h vec_nega.h 
	./cc vec_nega.c
vec_norm.o:\
	cc vec_norm.c vector.h 
	./cc vec_norm.c
vec_sub.o:\
	cc vec_sub.c vector.h vec_sub.h 
	./cc vec_sub.c
vec_subsc.o:\
	cc vec_subsc.c vector.h vec_subsc.h 
	./cc vec_subsc.c
vec_xprod.o:\
	cc vec_xprod.c vector.h vec_xprod.h 
	./cc vec_xprod.c
vec_zero.o:\
	cc vec_zero.c vector.h vec_zero.h 
	./cc vec_zero.c
vector.a:\
	mk-slib vector.sld vec_add.o vec_addsc.o vec_angle.o vec_anglen.o \
	vec_assi.o vec_dist.o vec_div.o vec_divsc.o vec_dotp.o vec_mag.o \
	vec_mult.o vec_multsc.o vec_nega.o vec_norm.o vec_sub.o vec_subsc.o \
	vec_xprod.o vec_zero.o 
	./mk-slib vector vec_add.o vec_addsc.o vec_angle.o vec_anglen.o \
	vec_assi.o vec_dist.o vec_div.o vec_divsc.o vec_dotp.o vec_mag.o \
	vec_mult.o vec_multsc.o vec_nega.o vec_norm.o vec_sub.o vec_subsc.o \
	vec_xprod.o vec_zero.o 
clean: tests_clean 
	rm -f UNIT_TESTS/t_add1 UNIT_TESTS/t_add1.o UNIT_TESTS/t_add2 \
	UNIT_TESTS/t_add2.o UNIT_TESTS/t_addsc1 UNIT_TESTS/t_addsc1.o \
	UNIT_TESTS/t_addsc2 UNIT_TESTS/t_addsc2.o UNIT_TESTS/t_assign \
	UNIT_TESTS/t_assign.o UNIT_TESTS/t_div1 UNIT_TESTS/t_div1.o \
	UNIT_TESTS/t_div2 UNIT_TESTS/t_div2.o UNIT_TESTS/t_divsc1 \
	UNIT_TESTS/t_divsc1.o UNIT_TESTS/t_divsc2 UNIT_TESTS/t_divsc2.o \
	UNIT_TESTS/t_dotprod UNIT_TESTS/t_dotprod.o UNIT_TESTS/t_mag1 \
	UNIT_TESTS/t_mag1.o UNIT_TESTS/t_mult1 UNIT_TESTS/t_mult1.o \
	UNIT_TESTS/t_mult2 UNIT_TESTS/t_mult2.o UNIT_TESTS/t_multsc1 \
	UNIT_TESTS/t_multsc1.o UNIT_TESTS/t_multsc2 UNIT_TESTS/t_multsc2.o \
	UNIT_TESTS/t_nega1 UNIT_TESTS/t_nega1.o UNIT_TESTS/t_nega2 \
	UNIT_TESTS/t_nega2.o UNIT_TESTS/t_norm1 UNIT_TESTS/t_norm1.o \
	UNIT_TESTS/t_norm2 UNIT_TESTS/t_norm2.o UNIT_TESTS/t_sub1 \
	UNIT_TESTS/t_sub1.o UNIT_TESTS/t_sub2 UNIT_TESTS/t_sub2.o \
	UNIT_TESTS/t_subsc1 UNIT_TESTS/t_subsc1.o UNIT_TESTS/t_subsc2 \
	UNIT_TESTS/t_subsc2.o UNIT_TESTS/t_util.a UNIT_TESTS/t_util.o \
	UNIT_TESTS/t_xprod UNIT_TESTS/t_xprod.o UNIT_TESTS/t_zero \
	UNIT_TESTS/t_zero.o conf-cctype conf-systype ctxt/bindir.c \
	ctxt/bindir.o ctxt/ctxt.a ctxt/dlibdir.c ctxt/dlibdir.o \
	ctxt/incdir.c ctxt/incdir.o ctxt/repos.c ctxt/repos.o ctxt/slibdir.c 
	rm -f ctxt/slibdir.o ctxt/version.c ctxt/version.o deinstaller \
	deinstaller.o inst-check inst-check.o inst-copy inst-copy.o inst-dir \
	inst-dir.o inst-link inst-link.o install_core.o install_error.o \
	installer installer.o instchk instchk.o insthier.o mk-ctxt mk-ctxt.o \
	vec_add.o vec_addsc.o vec_angle.o vec_anglen.o vec_assi.o vec_dist.o \
	vec_div.o vec_divsc.o vec_dotp.o vec_mag.o vec_mult.o vec_multsc.o \
	vec_nega.o vec_norm.o vec_sub.o vec_subsc.o vec_xprod.o vec_zero.o \
	vector.a 

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
	cpj-genmk > Makefile.tmp
	mv Makefile.tmp Makefile

