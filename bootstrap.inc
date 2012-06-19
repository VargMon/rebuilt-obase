#!/bin/sh
#
# Copyright (c) 2012 Antti Harri <iku@openbsd.fi>
#
# Permission to use, copy, modify, and distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
# OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#

set -eu

mycc()
{
	echo "$CC $@"
	$CC "$@"
}

compile_objs()
{
	OBJS=

	for i in $SRCS; do
		obj=$(echo "$i" | sed 's/\.c$/.o/')
		OBJS="$OBJS $obj"
		mycc $CFLAGS -c -o $obj $i
	done
}

link_objs()
{
	mycc $LDFLAGS -o "$1" $OBJS
	rm -f $OBJS
}

CC=${CC:-cc}
CFLAGS=${CFLAGS:--O2 -pipe}
CFLAGS="$CFLAGS -isystem $OBASE/include -DOBASE -D_GNU_SOURCE"
LDFLAGS=${LDFLAGS:--static}

MARCH=`uname -m`

OHASH_DIR=${OHASH_DIR:-OHASH_DIR not set}
LIBOHASH_SRCS="	$OHASH_DIR/ohash_create_entry.c
		$OHASH_DIR/ohash_delete.c
		$OHASH_DIR/ohash_do.c
		$OHASH_DIR/ohash_entries.c
		$OHASH_DIR/ohash_enum.c
		$OHASH_DIR/ohash_init.c
		$OHASH_DIR/ohash_interval.c
		$OHASH_DIR/ohash_lookup_interval.c
		$OHASH_DIR/ohash_lookup_memory.c
		$OHASH_DIR/ohash_qlookup.c 
		$OHASH_DIR/ohash_qlookupi.c"

