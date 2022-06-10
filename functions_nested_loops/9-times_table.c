#include "main.h"
/**
*times_table - print the table
*/

void times_table(void)
{
	int t, n;

	t = 0;

	while (t <= 9)
	{
		n = 1;

		while (n <= 9)
		{
			_putchar((t * n) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar('\n');
		t++;
	}
}
