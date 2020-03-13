#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: char that separates numbers being printed
 * @n: numbers that will be printed
(* a blank line
* Description: a function that prints numbers, followed by a new line
(* section header: Section description)*
* Return: returns void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list numberstoprint;
	unsigned int loop;


	va_start(numberstoprint, n);

	for (loop = 0; loop < n; loop++)
	{
		printf("%i", va_arg(numberstoprint, unsigned int));

		if (separator != NULL && loop < n - 1)
			printf("%s", separator);


	}

		va_end(numberstoprint);

	       printf("\n");
}
