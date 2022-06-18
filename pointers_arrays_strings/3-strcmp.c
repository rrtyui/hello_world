#include "main.h"
/**
* _strcmp - return the length of a string
* @s1: parameterer
* @s2: parametrer
* Return: s1 - s2
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
