#include "main.h"

/**
 * print- prints all specifiers
 * @c: char to print
 * @vlist: variadic arguement
 *
 * Return: functions
 */
int print(char c, va_list vlist)
{
	switch (c)
	{
		case 'c':
			return (_putchar(va_arg(vlist, int)));
		case 's':
			return (_puts(va_arg(vlist, char*)));
		case '%':
			return (_putchar('%'));
		case 'd':
		case 'i':
			return (_print_number(va_arg(vlist, int)));
		default:
			return (_putchar('%') + _putchar(c));
	}
}
