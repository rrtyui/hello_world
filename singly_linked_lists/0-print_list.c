#include "lists.h"

/**
 * print_list - prints all the elements of a given list
 * @h: pointer
 *
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;	
	
	tmp = h;


	for (i = 0; tmp != NULL; i++)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nill)\n");
		}

		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
