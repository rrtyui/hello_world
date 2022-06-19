#include "main.h"
/**
* _memset - return the length of a string
* @c: parameterer
* @s: parametrer
* @n: paremetrer
*/

char *_memset(char *s, char b, unsigned n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
