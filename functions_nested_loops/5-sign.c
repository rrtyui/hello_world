#include "main.h"
/**
*print_sign - checks for a lower case character
*Return: 1 if is lower or 0 otherwise
*@n: is the parametrer given to the funct
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");

		return(1);
	}

	else if (n == 0)
	{
		_putchar("0");

		return(0);	
	}

	else if (n < 0)
	{
		_putchar("-");

		return (-1);
	}
}
