#include "main.h"

/**
 *_strncpy - function
 *@dest: paremetrer
 *@src: paremetrer
 *@n: paremetrer
 *Return: dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
