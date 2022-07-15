#include "lists.h"

/**
 *add_node - add a node
 *@head: point node
 *@str: par
 *Return: head point
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		return (NULL);
	}
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;

	*head = n;

	return (*head);
}
