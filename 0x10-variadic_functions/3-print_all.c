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

		va_list print;

		va_start (print, format);


		while ( va_arg(print, format) != '\0')
		{
			switch (format)
			{
			case 'c':
				char c = va_arg(print, format);
				/*convert va_arg to char*/
				/*printf %c va_arg*/
			case 'i':
				/*convert to int and printf*/
				int i = va_arg(print, format);
			case 'f':
				/*convert to float print %f*/
				float f = va_arg(print, format);
			case 's':
				/*convert to char * * print %c*/
				/* if char * == NULL print nil*/
				char *s = va_arg(print, format);
				if ( s == NULL)
					printf("(nil)");
			default:
				printf("");
			}
		}
		printf("\n");
		va_end(print);

}
