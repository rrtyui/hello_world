#include "lists.h"

/**
 *sum_listint - a function
 *@head: pointer
 *Return: value
 */
int sum_listint(listint_t *head)
{
	listint_t *now;
	int x = 0;

	if (head == NULL)
	{
		return (0);
	}
	now = head;
	while (now != NULL)
	{
		x += now->n;
		now = now->next;
	}
	return (x);
}
