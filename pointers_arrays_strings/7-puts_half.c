#include "main.h"
/**
* print_rev - return the length of a string
* @str: parameterer
*/

void puts_half(char *str)
{
	int l = 0;

	int h;

	while (str[l] != '\0')
	{
		l++;
	}

	for ( h = (l / 2);h < l; h++)
	{
		_putchar(str[h]);

	}

	if (l % 2 == 0)
	{
		while (n < l)
		{
			_putchar(n);
			n++;
		}
	}
}
