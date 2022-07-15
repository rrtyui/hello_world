#include "lists.h"

/**
 *get_nodeint_at_index - function that return the nth node
 *@head: pointer to head
 *@index: par
 *Return: null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *now;
	unsigned int n;

	if (head == NULL)
	{
		return (NULL);
	}
	now = head;
	n = 0;
	while (now != NULL)
	{
		if (n == index)
			return (now);
		n++;
		now = now->next;
	}
	return (NULL);
}
