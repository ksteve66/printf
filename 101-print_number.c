#include "main.h"
/**
 * print_number - print integer nmbers
 * @n: number
 * Return: 0
 */

unsigned int print_number(int n)
{
	unsigned int m, d, count, tot = 0;

	if (n < 0)
	{
		_putchar(45);
		tot++;
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
		tot++;
	}
	return (tot);
}
