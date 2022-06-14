
#include "main.h"
/**
* _puts - return the length of a string
* @str: parameterer
*/

void print_rev(char *str)
{
	{
		int l = 0, i;

		while (str[i++])
		{
			l++;
		}

		for (i = l - 1; i >= 0; i--)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
