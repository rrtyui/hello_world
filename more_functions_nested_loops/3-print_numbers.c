#include "main.h"
#include <stdio.h>

/**
* print_numbers - print numbers
*/

void print_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
