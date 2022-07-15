#include "lists.h"

/**
 *add_nodeint - adds a node
 *@head: pointer head
 *@n: par
 *Return: pointer head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
