#include <stdio.h>
#include <stdio.h>
/**
 * main - this program prints the followin text
 * Return: zero
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');

	return (0);
}
