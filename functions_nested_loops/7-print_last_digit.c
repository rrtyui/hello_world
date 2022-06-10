#include "main.h"
/**
*print_last_digit - checks for a lower case character
*Return: 1 if is lower or 0 otherwise
*@n: is the parametrer given to the funct
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
		x = n % 10;
	}
	if (x < 0)
	{
		x = -x;

		_putchar(x + '0');
	}
	return (x);
}
