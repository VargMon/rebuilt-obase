#	$OpenBSD: Makefile.inc,v 1.2 1997/09/21 11:43:04 deraadt Exp $

BINDIR?=	/usr/sbin

COPTS+=		-isystem ${.CURDIR}/../../../libobase/include -DOBASE -Wall
COPTS+=		-DMACHINE='"${MACHINE}"' -DMACHINE_ARCH='"${MACHINE_ARCH}"'
HOSTCC=		${CC}
HOSTCFLAGS+=	${COPTS}
LIBOBASE=	${.CURDIR}/../../../libobase/libobase.a
DPADD+=		${LIBOBASE}
LDADD+=		${LIBOBASE}
