#include <stdio.h>
#include "main.h"
/**
 *main  - main function
 *@argc: arg counter
 *@argv: arg vector
 *Return: 0
 */

int main(int argc, char  *argv[])
{
	int n1, n2, prod;

	if (arc != 3)
	{
		printf("Error\n");

		return (1);
	}

	n1 = atoi(arv[1]);
	n2 = atoi(arv[2]);
	prod = n1 * n2;

	printf("%d", prod);

	return (0);
}
