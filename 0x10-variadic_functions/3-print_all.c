#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a const char * used to initialize the list
(* a blank line
* Description: a function that prints anything
(* section header: Section description)*
* Return: returns void
*/

void print_all(const char * const format, ...)
{

		va_list print;

		va_start(print, format);


		while (va_arg(print, format) != '\0')
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

				if (s == NULL)
					printf("(nil)");
			default:
				printf("");
			}
		}
		printf("\n");
		va_end(print);

}
/* this function prints anything that is in variable list*/
/* create a va_list variable called print*/
/*start the list from the first item using Va_start(print, format)*/
/* check to see if anything in the list is not a null byte aka blank*/
/* switch cases for what is in the list*/
/* if c then convert the va_arg(print, format) to a char then print*/
/* if i then convert the va_arg(print, format) to int then print*/
/* if f then convert the va_arg(print, format) to float then print*/
/* if s then convert the va_arg(print, format) to a char*/
/* char * means it's a string. then print*/
/* anything else is ignored, the default is to print nothing*/
/* print a newline*/
/* end the list with va_end*/
