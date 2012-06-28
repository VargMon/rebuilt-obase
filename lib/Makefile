#	$OpenBSD$
#	$NetBSD: Makefile,v 1.20.4.1 1996/06/14 17:22:38 cgd Exp $

SUBDIR=		libobase
SUBDIR+=	libc
#SUBDIR+=	libssl

.include <bsd.own.mk>

.if (${KERBEROS5:L} == "yes")
#SUBDIR+=libgssapi libkadm5srv libkadm5clnt libkrb5
.endif

.include <bsd.subdir.mk>
