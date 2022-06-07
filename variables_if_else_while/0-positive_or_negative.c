#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - sort a random number and asign it to n
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive");
	}
	if (n < 0)
	{
		printf("The number is negative ");
	}
	if (n == 0)
	{
		printf("The number is zero");
	}
	return (0);

}
