#include "main.h"
/**
*times_table - print the table
*/

void times_table(void)
{
	int n, tab, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (tab = 1; tab <= 9; tab++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * tab;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
