#include "main.h"
/**
 * print_number - print integer nmbers
 * @n: number
 * Return: 0
 */

int _print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		_print_number(num / 10);
	}
	return (_putchar((num % 10) + '0'));
	
}
