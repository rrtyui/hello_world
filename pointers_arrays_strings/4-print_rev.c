
#include "main.h"
/**
* _puts - return the length of a string
* @str: parameterer
*/

void print_rev(char *str)
{
	int i = _strlen(str);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
