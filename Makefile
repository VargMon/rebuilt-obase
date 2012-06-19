# Main Makefile

SUBDIR +=	libobase
SUBDIR +=	src

distrib-dirs:
	cd etc && ${MAKE} $@

.include <bsd.subdir.mk>
