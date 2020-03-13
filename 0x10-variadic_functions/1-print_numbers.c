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

	for (loop = n; loop >= 0; loop = va_arg(ap,int))
	{
		printf("%d", va_arg(numberstoprint, int);
	}
			va_end(numberstoprint);
		printf('\n');
}
