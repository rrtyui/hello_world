#include "main.h"
/**
* print_rev - return the length of a string
* @str: parameterer
*/

void puts_half(char *str)
{
	int l = 0;

	int h;

	int n;

	while (str[l] != '\0')
	{
		l++;
	}
	
	if (l % 2 == 0)
	{
		for (n = ((l - 1) / 2) + 2; n < l; n++)
		{
			_putchar(str[n]);
		}
                        _putchar('\n');
	}

	for ( h = (l / 2) + 1; h < l; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
