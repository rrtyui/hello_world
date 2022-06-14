
#include "main.h"
/**
* _puts - return the length of a string
* @str: parameterer
*/

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = i; j > 0; j++)
	{
		_putchar(str[j]);
		j--;
	}
	_putchar('\n');
}
