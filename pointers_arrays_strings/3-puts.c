#include "main.h"
/**
* _strlen - return the length of a string
* @s: parameterer
* Return: l
*/

void _puts(char *str)
{
	int i = 0;

	char s = *str;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
