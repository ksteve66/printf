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

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[++i] != '\0')
			{
				print_item += print(format[i], arg);
			}
			else
			{
				return (print_item);
			}
			i++;
			continue;
		}

		if (format[i])
		{
			print_item += _putchar(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (print_item);
}
