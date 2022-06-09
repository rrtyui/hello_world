#include "main.h"
/**
*print_alphabet_x10 - print alphabet in lower case ten times
*followed by a new line
*/

void print_alphabet_x10(void)
{
	char i = 'a';

	int count = 0;

	while (count < 10)
	{
		for (i = 'a' ; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count++;
	}
}
