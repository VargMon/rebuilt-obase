#	$OpenBSD: src/usr.sbin/Makefile,v 1.161 2012/03/05 11:15:41 dlg Exp $

.include <bsd.own.mk>

SUBDIR =	mtree

.if (${AFS:L} == "yes")
#SUBDIR+=afs
.endif

.if (${YP:L} == "yes")
#SUBDIR+=ypbind ypldap yppoll ypset ypserv
.endif

.include <bsd.subdir.mk>

