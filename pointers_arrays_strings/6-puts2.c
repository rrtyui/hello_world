#include "main.h"
/**
* puts2 - return the length of a string
* @str: parameterer
*/

void puts2(char *str)
{

	int l = 0;

	int i = 0;

	while (str[l] != '\0')
	{
		l++;
	}



	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
