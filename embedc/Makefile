.PHONY: all clean

CC := gcc
CFLAGS := -Wall -Wextra -O2 -Iinclude

all: libctools_emb.o

libctools_emb.o: src/io.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f libctools_emb.o