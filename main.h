#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print(char c, va_list vlist);
int _puts(char *str);

#endif /* MAIN_H */
