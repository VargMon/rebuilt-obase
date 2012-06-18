#	$OpenBSD: Makefile.inc,v 1.1 2011/09/16 18:20:14 shadchin Exp $

BINDIR=		/usr/bin
CPPFLAGS+=	-I${.CURDIR}/..

COPTS+=		-isystem ${.CURDIR}/../../../../libobase/include -DOBASE -Wall
COPTS+=		-DMACHINE='"${MACHINE}"' -DMACHINE_ARCH='"${MACHINE_ARCH}"'
COPTS+=		-isystem ${.CURDIR}/../../../../libobase/include
HOSTCC=		${CC}
HOSTCFLAGS+=	${COPTS}
LIBOBASE=	${.CURDIR}/../../../../libobase/libobase.a
DPADD+=		${LIBOBASE}
LDADD+=		${LIBOBASE}

.PATH:	${.CURDIR}/..
