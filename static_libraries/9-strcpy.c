#include "main.h"
/**
* *_strcpy - return the length of a string
* @dest: parameterer
* @src: parametrer
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
