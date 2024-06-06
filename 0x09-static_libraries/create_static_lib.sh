#!/bin/bash

CC=gcc

CFLAGS="-Wall -Werror -Wextra -pedantic -std=gnu89"

LIBRARY_NAME="liball.a"

OBJECT=()

for SOURCE in *.c; do
	if [ -e "$SOURCE" ]; then
		OBJECT="${SOURCE%.c}.o"
		$CC $CFLAGS -c $SOURCE -o $OBJECT

		if [ $? -ne 0 ]; then
			exit 1
		fi

		OBJECTS+=($OBJECT)
	fi

done

if [ ${#OBJECTS[@]} -gt 0 ]; then
	ar rcs $LIBRARY_NAME "${OBJECTS[@]}"
else
	exit 1
fi
