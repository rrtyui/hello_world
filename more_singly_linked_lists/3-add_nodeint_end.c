#include "lists.h"

/**
 *add_nodeint_end - add a new end node
 *@head: pointer to head
 *@n: par
 *Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		old = *head;
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = new;
	}
	return (new);

}
