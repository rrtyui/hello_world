#include "function_pointers.h"

/**
 * array_iterator - Executes a function 
 * @array: The array.
 * @size: the size
 * @action: A pointer 
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
