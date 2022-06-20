#include "main.h"

/**
 *isqrt_rec - calculate square root
 *@i: par 
 *@n: par
 *Return: sqrt root
 */

int isqrt_rec(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (isqrt_rec(i + 1, n));
	}
}
