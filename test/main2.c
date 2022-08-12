#include <limits.h>
#include <stdio.h>
#include "../main.h"

int main(void)
{
	int Len = 0;
	
	Len =_printf("hello %s A\n", "world\n");
	printf("%i\n", Len);

	return (0);
}
