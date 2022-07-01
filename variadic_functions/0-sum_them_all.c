#include <stdarg.h>
#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	unsigned int  i = 0, sum = 0;

	for (i = 0; i < n; n++)
	{
		sum += va_arg(ap,unsigned int);
	}

	va_end(ap);

	return (sum);

	
}
