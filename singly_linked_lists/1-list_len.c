#include "lists.h"

/**
 *list_len - elements of a list
 *@h: pointer
 *Return: index
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
