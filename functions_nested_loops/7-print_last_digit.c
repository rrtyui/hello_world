#include "main.h"
/**
*print_last_digit - checks for a lower case character
*Return: 1 if is lower or 0 otherwise
*@n: is the parametrer given to the funct
*/

int print_last_digit(int n)
{
	int = n % 10;

	if (n < 0)
	{
		n = (-n) * 1;
	}
	_putchar('0' + n);

	return (n);
}
