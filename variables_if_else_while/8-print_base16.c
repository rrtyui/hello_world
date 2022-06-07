#include <stdio.h>
#include <stdio.h>
/**
 * main - this program prints the followin text
 * Return: zero
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");

	return (0);
}
