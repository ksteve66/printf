#include "main.h"

/**
 *
 */
int print(char c, va_list vlist)
{
	switch (c)
	{
		case 'c':
			return _putchar(va_arg(vlist, int));
	}
}
