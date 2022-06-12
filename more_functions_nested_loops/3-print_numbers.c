#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for upper case
*@c: variable
* Return: 1 if its upper and cero otherwise
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
