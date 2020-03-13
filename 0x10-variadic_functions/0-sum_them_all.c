#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list numtoadd;
	unsigned int argloop;
	unsigned int sum = 0;

	if (n == 0)
		return (0);


	va_start(numtoadd, n);

	for (argloop = 0; argloop < n; argloop++)
	{
		sum = sum + va_arg(numtoadd, int);
	}
		va_end(numtoadd);
		return(sum);
}
