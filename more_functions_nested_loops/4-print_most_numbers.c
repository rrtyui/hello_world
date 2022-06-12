#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - prints 0 to 9 without 2 and 4
*/

int print_most_numbers(int n)
{
	if (n != 2 && n != 4)
	{
		_putchar(n + '0');
		_putchar('\n');
	}

	return (0);
}
