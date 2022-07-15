#include "lists.h"

/**
 *pop_listint - this function deletes a node
 *@head: pointer to head
 *Return: head p
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
