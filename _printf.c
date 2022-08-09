#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: the character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int print_item = 0;

	while (format[i])
	{
		_putchar(format[i]);
		print_item++;
		i++;
	}
	return (print_item);
}
