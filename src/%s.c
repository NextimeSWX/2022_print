/*
 * E89 Pedagogical & Technical Lab
 * project:     Printf
 * created on:  2022-12-20 - 11:59 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: %s.c
 */

#include <unistd.h>
#include <stdarg.h>
#include "stu.h"

int stu_prints(int fd, va_list *args)
{
    char *str;

    str = va_arg(*args, char *);
    write(fd, str, stu_strlen(str));
    return (0);
}
