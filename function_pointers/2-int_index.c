#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: array int
 * @size: the size
 * @cmp: pointer
 *
 * Return: retunr 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
