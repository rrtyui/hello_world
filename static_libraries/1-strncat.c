#include "main.h"
/**
* _strncat - return the length of a string
* @src: parameterer
* @dest: parametrer
* @n: paremetrer
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
