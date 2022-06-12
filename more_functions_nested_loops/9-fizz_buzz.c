#include <stdio.h>

/**
* main - print lines in terminal
*/

int main(void)
{
	int n = 1;

	while (n <= 100)
	{	
		if ((n % 3) == 0 && (n % 5) == 0)
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
		
		if (n == 100)
		{
			continue;
		}
		n++;
	}
	printf("\n");

	return(0);
}
