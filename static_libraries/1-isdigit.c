#include "main.h"
#include <stdio.h>

/**
* _isdigit - checks for digit from 0 to 9
*@c: variable
* Return: 1 if its digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
