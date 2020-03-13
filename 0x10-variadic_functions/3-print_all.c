#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: integers passed into function
(* a blank line
* Description: a function that returns the sum of all its parameters
(* section header: Section description)*
* Return: returns sum of all integers in list
*/

void print_all(const char * const format, ...)
{
	va_list printsanything;
	unsigned int looper;


	va_start(printsanything, format);


	while (format)
	{
		printf("%s", va_arg(printsanything, char *);
	}

	va_end(printsanything);

}
