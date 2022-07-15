#include "lists.h"
/**
* delete_nodeint_at_index - function that deletes a node
* @head: pointer head
* @index: par
* Return: par
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *tmp = *head;

	unsigned int idx = 0;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp && idx < index - 1)
	{
		tmp = tmp->next;
		idx++;
	}
	if (!tmp || !(tmp->next))
	{
		return (-1);
	}
	prev = tmp->next;
	tmp->next = prev->next;

	free(prev);
	return (+1);
}
