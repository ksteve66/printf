#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list arg);
int print(char c, va_list vlist);
int _puts(char *str);
unsigned int print_number(int n);
int print_rev(char *s);
int _putchar(int c);

#endif /* MAIN_H */
