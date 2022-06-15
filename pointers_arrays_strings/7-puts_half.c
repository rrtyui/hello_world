#include "main.h"
/**
* print_rev - return the length of a string
* @str: parameterer
*/

void puts_half(char *str)
{
	int l = 0;

	int h = l /2;

	int n = (l - 1) / 2;

	while (str[l] != '\0')
	{
		l++;
	}



	if (l % 2 == 0)
	{
		while (n < l)
		{
			_putchar(n);
			n++;
		}
	}

	for (h < l; h++)
	{
		_putchar(str[h]);
	}


}
