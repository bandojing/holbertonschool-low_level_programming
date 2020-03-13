#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
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
