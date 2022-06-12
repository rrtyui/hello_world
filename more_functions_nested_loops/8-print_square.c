#include "main.h"
#include <stdio.h>

/**
* print_square - print lines in terminal
* @size: size of the square
*/

void print_square(int size)
{
	int l, c;

	if (size > 0)
	{
		for (c = 1; c < size; c++)
		{
			l = 0;

			_putchar('#');

			for (l = 0; l < size; l++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
