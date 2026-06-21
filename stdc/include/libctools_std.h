#ifndef LIBCTOOLS_STD_H
#define LIBCTOOLS_STD_H

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

void println(const char *format, ...);

#endif /* LIBCTOOLS_STD_H */