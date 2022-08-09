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
	va_list arg;

	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					print_item += print_char(arg);
					i += 2;
					break;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			print_item++;
		}
		i++;
	}
	va_end(arg);
	return (print_item);
}
