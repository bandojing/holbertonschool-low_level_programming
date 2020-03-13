#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list numberstoprint;
	unsigned int loop;


	va_start(numberstoprint, n);

	if (separator == NULL)
	{
	for (loop = n; loop < n; loop++)
	{
		printf("%i", va_arg(numberstoprint, int));
	}
	}	
	else
		printf("%s", separator);

		va_end(numberstoprint);

	       printf("\n");
}
