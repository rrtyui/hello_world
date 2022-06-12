#include <stdio.h>

/**
* print_square - print lines in terminal
* @size: size of the square
*/

int main()
{
	int n = 1;

	while (n <= 100)
	{	
		if ((n % 3 ) == 0 && (n % 5) == 0)
		{
			printf("FizBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}

		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		printf(" ");

		n++;
	}
	printf("\n");

	return(0);
}
