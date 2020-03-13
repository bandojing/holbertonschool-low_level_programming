#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list numtoadd;
	 int argloop;
	int sum = 0;

	if (n == 0)
		return (0);


	va_start(numtoadd, n);

	for (argloop = n; argloop >= 0; argloop = va_arg(numtoadd, const unsigned int))
	{
		sum += argloop;
		va_end(numtoadd);
	}
	return(sum);
}
