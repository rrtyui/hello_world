#include "lists.h"

/**
 *listint_len - returns the number of elements listed
 *@h: pointer
 *Return: index
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
