#include "main.h"
/**
* _memset - return the length of a string
* @c: parameterer
* @s: parametrer
* @n: paremetrer
*/

char *_memset(char *s, char b, unsigned n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
