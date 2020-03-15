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
	char *p_copy;

	va_start(list, n);


	for (argloop = 0; argloop < n; argloop++)
	{
		/*if ((va_arg(list, char *)) == NULL)*/
			/*printf("(nil)");*/
/*prnts out any char strings found in the list*/
		/*if (va_arg(list, char *) != NULL)*/

		p_copy = va_arg(list, char *);
		if (copy  == NULL)
			/*if ( n == '\0')*/
			printf("(nil)");

		if (copy /*va_arg(list, char *)*/ != NULL)
			printf("%s",p_copy /*va_arg(list, char *)*/);

		if (separator != NULL && argloop <  n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);

}
/*create va_list list, unsigned in argloop for loop counter*/
/*decided to create char pointer to copy the char in the list to*/
/*start the list*/
/*start the for loop to iterate through the list*/
/*place value of va_arg(list, char *) in copy*/
/*if copy is null print nill*/
/*if copy is not null print it out*/
/*if the separator exists and the loop is less than n-1 print the separator*/
/*this works because "," , 2, "john", "django" means separator there are 2*/
/*items in the list so john is first then django is second so as long as*/
/*argloop is less than one will it print: john, django*/
/*if there were three items it would print: item1, item2, item3 (no , here)*/
