#include <stdio.h>
/**
 * main - this program prints the followin text
 * Return: zero
 */
int main(void)
{
	printf("Size of a char %d bytes \n",sizeof(char));
	printf("Size of a int %d bytes \n",sizeof(int));
	printf("Size of a float %d bytes \n",sizeof(float));
	printf("Size of a long %d bytes \n",sizeof(long int));
	printf("Size of a long long  %d bytes \n",sizeof(long long int));

	return (0);
}