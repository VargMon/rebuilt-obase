# Main Makefile

SUBDIR +=	lib
SUBDIR +=	src

distrib-dirs:
	cd etc && ${MAKE} $@

distribution-etc-root-var:
	cd etc && ${MAKE} $@

.include <bsd.subdir.mk>
