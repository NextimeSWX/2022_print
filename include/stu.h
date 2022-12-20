/*
 * E89 Pedagogical & Technical Lab
 * project:     Printf
 * created on:  2022-12-09 - 09:34 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <stdarg.h>

int stu_dprintf(int fd, const char *pattern, ...);
int stu_printc(int fd, va_list *args);
int stu_prints(int fd, va_list *args);
unsigned int stu_strlen(const char *str);

#endif
