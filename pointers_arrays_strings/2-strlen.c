#include "main.h"
/**
* _strlen - return the length of a string
* @s: parameterer
* Return : the length 
*/

int _strlen(char *s)
{
	int l;

	while(*s != '\0')
	{
		l++;
		*s++;
	}
	return (l);
}
