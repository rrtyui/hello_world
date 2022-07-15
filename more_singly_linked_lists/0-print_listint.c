#include "lists.h"

/**
 *print_listint - prints elements of a struct
 *@h: pointer
 *Return: index
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
