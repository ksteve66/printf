#include "main.h"

/**
 * print_char - Print char
 * @arg: arguments
 *
 * Return: 1
 */

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
