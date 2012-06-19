#	$OpenBSD: Makefile,v 1.123 2012/04/22 23:43:38 espie Exp $

.include <bsd.own.mk>

SUBDIR =	apply
SUBDIR +=	apropos
SUBDIR +=	ar
SUBDIR +=	arch
SUBDIR +=	asa
SUBDIR +=	awk
SUBDIR +=	banner
SUBDIR +=	basename
SUBDIR +=	biff
SUBDIR +=	cal
SUBDIR +=	cmp
SUBDIR +=	col
SUBDIR +=	colrm
SUBDIR +=	column
SUBDIR +=	comm
SUBDIR +=	cpp
SUBDIR +=	csplit
SUBDIR +=	ctags
SUBDIR +=	cut
SUBDIR +=	cvs
SUBDIR +=	dc
SUBDIR +=	deroff
SUBDIR +=	diff
SUBDIR +=	diff3
SUBDIR +=	dirname
SUBDIR +=	du
SUBDIR +=	env
SUBDIR +=	expand
SUBDIR +=	false
SUBDIR +=	fgen
SUBDIR +=	file
SUBDIR +=	file2c
SUBDIR +=	finger
SUBDIR +=	fmt
SUBDIR +=	fold
SUBDIR +=	from
SUBDIR +=	fsplit
SUBDIR +=	getconf
SUBDIR +=	getent
SUBDIR +=	getopt
SUBDIR +=	gzsig
SUBDIR +=	head
SUBDIR +=	hexdump
SUBDIR +=	id
SUBDIR +=	indent
SUBDIR +=	ipcrm
SUBDIR +=	join
SUBDIR +=	jot
SUBDIR +=	lam
SUBDIR +=	last
SUBDIR +=	leave
SUBDIR +=	less
SUBDIR +=	lex
SUBDIR +=	lndir
SUBDIR +=	logger
SUBDIR +=	logname
SUBDIR +=	look
SUBDIR +=	lorder
SUBDIR +=	m4
SUBDIR +=	mail
SUBDIR +=	make
SUBDIR +=	man
SUBDIR +=	mandoc
SUBDIR +=	mesg
SUBDIR +=	mkdep
SUBDIR +=	mkstr
SUBDIR +=	mktemp
SUBDIR +=	nice
SUBDIR +=	nohup
SUBDIR +=	paste
SUBDIR +=	patch
SUBDIR +=	pkg-config
SUBDIR +=	pr
SUBDIR +=	printenv
SUBDIR +=	printf
SUBDIR +=	ranlib
SUBDIR +=	rcs
SUBDIR +=	readlink
SUBDIR +=	renice
SUBDIR +=	rev
SUBDIR +=	rpcgen
SUBDIR +=	rpcinfo
SUBDIR +=	rs
SUBDIR +=	script
SUBDIR +=	sdiff
SUBDIR +=	sed
SUBDIR +=	shar
SUBDIR +=	sort
SUBDIR +=	spell
SUBDIR +=	split
SUBDIR +=	strings
SUBDIR +=	tee
SUBDIR +=	time
SUBDIR +=	touch
SUBDIR +=	tr
SUBDIR +=	true
SUBDIR +=	tsort
SUBDIR +=	tty
SUBDIR +=	ul
SUBDIR +=	uname
SUBDIR +=	unexpand
SUBDIR +=	unifdef
SUBDIR +=	uniq
SUBDIR +=	units
SUBDIR +=	unvis
SUBDIR +=	users
SUBDIR +=	uudecode
SUBDIR +=	uuencode
SUBDIR +=	vacation
SUBDIR +=	vis
SUBDIR +=	wall
SUBDIR +=	wc
SUBDIR +=	what
SUBDIR +=	whatis
SUBDIR +=	which
SUBDIR +=	who
SUBDIR +=	whois
SUBDIR +=	write
SUBDIR +=	xargs
SUBDIR +=	xinstall
SUBDIR +=	xstr
SUBDIR +=	yacc
SUBDIR +=	yes


.if (${YP:L} == "yes")
#SUBDIR+=ypcat ypmatch ypwhich
.endif

.if (${ELF_TOOLCHAIN:L} == "no")
#SUBDIR+= strip strings
.endif

.include <bsd.subdir.mk>
