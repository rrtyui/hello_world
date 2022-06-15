#include "main.h"
#include <stdio.h>
/**
* print_rev - return the length of a string
* @str: parameterer
*/

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);

		if (l == n - 1)
		{
			continue;
		}
		printf(",");
		printf(" ");
	}
	printf("\n");
}
