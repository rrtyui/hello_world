#include "main.h"
/**
* swap_int - swap the int values 
* @b: parameterer
* @a: paremetrer
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;

	*a = *b;

	*b = p;
}
