.PHONY: all clean

CC := gcc
CFLAGS := -Wall -Wextra -O2 -Iinclude
AR := ar

all: libctools_std.a

libctools_std.o: src/io.c
	$(CC) $(CFLAGS) -c $< -o $@

libctools_std.a: libctools_std.o
	$(AR) rcs $@ $<

clean:
	rm -f libctools_std.o libctools_std.a