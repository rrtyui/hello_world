#include <stdargs.h>



int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	int i = 0, sum = 0;

	for (i = 0; i < n; n++)
	{
		sum += va_arg(ap,int);
	}

	va_end(ap);

	return (sum);

	
}
