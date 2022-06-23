#include <stdlib.h>
#include "main.h"
/**
* create_array - return an array using malloc
* @size: parameterer
* @c: parametrer
* Return: null if its 0 and pointer if its succes
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if  (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}
