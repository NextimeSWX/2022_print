/*
 * E89 Pedagogical & Technical Lab
 * project:     Printf
 * created on:  2022-12-20 - 14:39 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: %c.c
 */

#include <unistd.h>
#include <stdarg.h>
#include "stu.h"

int stu_printc(int fd, va_list *args)
{
    char str;

    str = va_arg(*args, int);
    write(fd, &str, 1);
    return (0);
}
