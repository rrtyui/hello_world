#include "main.h"
#include <stdio.h>

/**
* print_line - print lines in terminal
*/

void print_line(int n)
{
	int c = 0;

	while (c <= n)
	{
		_putchar('_');

		if (n <= 0)
		{
			_putchar('\n');
		}
		c++;
	}
	_putchar('\n');
}
