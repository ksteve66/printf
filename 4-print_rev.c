#include "main.h"
/**
 * print_rev- prints a string , in reverse, followed by a new line
 * @s: input string
 * Return: void
 */
int print_rev(char *s)
{
	int i = 0;
	int count = 0;

	while (count >= 0)
	{
		if (s[count] != '\0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	i = count;

	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	return (i);
}
