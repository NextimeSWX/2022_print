/*
 * E89 Pedagogical & Technical Lab
 * project:     Printf
 * created on:  2022-12-20 - 11:51 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: dprintf.c
 */

#include <unistd.h>
#include <stdarg.h>
#include "stu.h"

int stu_dprintf(int fd, const char *pattern, ...)
{
    unsigned int i;
    va_list args;

    i = 0;
    va_start(args, pattern);
    while (pattern[i] != '\0') {
        if (pattern[i] == '%' && pattern[i + 1] == 's') {
            stu_prints(fd, &args);
            i += 2;
        }
        else if (pattern[i] == '%' && pattern[i + 1] == '%') {
            i += 1;
        }
        if (pattern[i] == '%' && pattern[i + 1] == 'c') {
            stu_printc(fd, &args);
            i += 2;
        }
        write(1, &pattern[i], 1);
        i += 1;
    }
    va_end(args);
    return (0);
}
