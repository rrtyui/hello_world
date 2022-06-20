#include "main.h"

/**
 *check - primer number for
 *@n: par
 *@i: par
 *Return: function
 */

int check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check(n, i - 1));
		}
	}
}

/**
 *is_prime_number - prime
 *@n: par
 *Return: function
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else
		return (check(n, n / 2));
}
