#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list numberstoprint;
	unsigned int loop;

	void (seperator);

	va_start(numberstoprint, n);

	if (seperator == NULL)
	{
	for (loop = n; loop < n; loop++)
	{
		printf("%i", va_arg(numberstoprint, int);
	}
	}	
	else
		printf("%s", seperator);

		va_end(numberstoprint);

	       printf('\n');
}
