#	$OpenBSD: Makefile.inc,v 1.4 1997/09/21 11:34:33 deraadt Exp $

BINDIR?=	/bin
LDSTATIC=	${STATIC}

COPTS+=		-isystem ${.CURDIR}/../../../libobase/include -DOBASE -Wall
COPTS+=		-DMACHINE='"${MACHINE}"' -DMACHINE_ARCH='"${MACHINE_ARCH}"'
COPTS+=		-D_GNU_SOURCE
HOSTCC=		${CC}
HOSTCFLAGS+=	${COPTS}
LIBOBASE=	${.CURDIR}/../../../libobase/libobase.a
DPADD+=		${LIBOBASE}
LDADD+=		${LIBOBASE}

