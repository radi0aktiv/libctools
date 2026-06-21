#include "libctools_std.h"

void println(const char *format, ...)
{
    va_list args;
    
    flockfile(stdout);
    
    if (format != NULL)
    {
        va_start(args, format);
        vprintf(format, args);
        va_end(args);
    }
    
    putchar('\n');
    
    funlockfile(stdout);
}