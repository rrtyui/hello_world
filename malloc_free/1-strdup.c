#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate a string 
* @str: parameterer
* Return: null if its 0 and pointer if its succes
*/

char *_strdup(char *str)
{
	char *strdup;

	int i, l;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		l++;
	}

	strdup = malloc(sizeof(char) * (l + 1));

	if(strdup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		strdup[i] = str[i];
	}

	strdup[l] = '\0';

	return (strdup);
}
