#include "main.h"
/**
* string_toupper - return the length of a string
* @str: parameterer
* Return: str
*/




char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
