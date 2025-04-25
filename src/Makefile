# Makefile
# Copyright (c) 2025 Ishan Pranav
# Licensed under the MIT license.

CC = clang
CFLAGS =  -ansi -gdwarf-4 -O3 -pedantic -Wall -Wextra

all: uva100 uva10189

%: %.c
	$(CC) $(CFLAGS) $< -o $@
