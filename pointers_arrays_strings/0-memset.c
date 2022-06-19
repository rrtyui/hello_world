#include "main.h"
/**
* _memset - return the length of a string
* @c: parameterer
* @s: parametrer
* @n: paremetrer
*/

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
