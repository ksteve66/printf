#include "main.h"
/**
 * _puts - prints str followed by a new line
 * @str: pointer to the string to point
 * Return: int
 */
int _puts(char *str)
{
	int i;

	if (str == NULL)
	{
		return (_puts("(null)"));
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
