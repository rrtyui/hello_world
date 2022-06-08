#include "main.h"

/**
 * main - this program prints the followin text
 * Return: zero
 * print_alphabet print the alphabet in lower case
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
