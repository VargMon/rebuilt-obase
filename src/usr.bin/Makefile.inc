#	$OpenBSD: Makefile.inc,v 1.2 1996/06/26 05:31:08 deraadt Exp $

BINDIR?=	/usr/bin

COPTS+=		-isystem ${.CURDIR}/../../../libobase/include -DOBASE -Wall
COPTS+=		-DMACHINE='"${MACHINE}"' -DMACHINE_ARCH='"${MACHINE_ARCH}"'
COPTS+=		-isystem ${.CURDIR}/../../../libobase/include
HOSTCC=		${CC}
HOSTCFLAGS+=	${COPTS}
LIBOBASE=	${.CURDIR}/../../../libobase/libobase.a
DPADD+=		${LIBOBASE}
LDADD+=		${LIBOBASE}
