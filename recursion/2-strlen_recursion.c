#include "main.h"


int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (1);
	}

	else
	{
		i++;
	}
	_srtlen_recursion(s) + 1;
}
