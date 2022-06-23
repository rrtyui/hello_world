#include <stdlib.h>
#include "main.h"
/**
* str_concat - return an array using malloc
* @s1: parameterer
* @s2: parametrer
* Return: null if its 0 and pointer if its succes
*/


char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	concat_str = malloc(sizeof(char) * l);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
}
