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
int sum_them_all(const unsigned int n, ...)
{
	va_list numtoadd;
	unsigned int argloop;
	unsigned int sum = 0;


	va_start(numtoadd, n);

	if (n == 0)
		return (0);

	for (argloop = 0; argloop < n; argloop++)
	{
		sum = sum + va_arg(numtoadd, int);
	}
		va_end(numtoadd);
		return (sum);
}
/* initialize vars for the va_list, unsigned int for loop counter*/
/* unsigned int for the sum*/
/* start the list*/
/* check if n is 0 return 0*/
/* start the loop to go through the list*/
/* the sum is equal to sum plus the int found in the list*/
/* end the list*/
/* return the sum*/
