#include <stdio.h>
#include <stdio.h>
/**
 * main - this program prints the followin text
 * Return: zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
