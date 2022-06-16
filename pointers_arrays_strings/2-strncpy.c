#include "main.h"
/**
* _strncat - return the length of a string
* @src: parameterer
* @dest: parametrer
* @n: paremetrer
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	dest[i++] = '\0';

	return (dest);
}
