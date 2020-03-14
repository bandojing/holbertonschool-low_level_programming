#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that returns the sum of all its parameters
 * @separator: string used to separate strings
 * @n: int passed in or number of arguments passed into variatic function
(* a blank line
* Description:  a function that prints strings, followed by a new line.
(* section header: Section description)*
* Return:  returns void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int argloop;
	char *copy;

	va_start(list, n);


	for (argloop = 0; argloop < n; argloop++)
	{
		/*if ((va_arg(list, char *)) == NULL)*/
			/*printf("(nil)");*/
/*prnts out any char strings found in the list*/
		/*if (va_arg(list, char *) != NULL)*/

		copy = va_arg(list, char *);
		if (copy  == NULL)
			/*if ( n == '\0')*/
			printf("(nil)");

		if (copy /*va_arg(list, char *)*/ != NULL)
			printf("%s", copy /*va_arg(list, char *)*/);

		if (separator != NULL && argloop <  n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);

}
