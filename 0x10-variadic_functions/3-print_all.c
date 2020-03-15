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
		unsigned int index;
		char c;
		int i;
                float f;
		char *p_s;

		while (format != NULL)
		{
			switch (format[index])
			{
			case 'c':
				/*char c = va_arg(print, char);*/
				/*convert va_arg to char*/
				c = va_arg(print, int);
				/*3-print_all.c:34:23: error: ‘char’ is promoted to ‘int’ when passed through ‘...’ [-Werror]
				  c = va_arg(print, char);*/

				printf("%c", c);
				break;
			case 'i':
				/*convert to int and printf*/
				i = va_arg(print, int);

				printf("%i", i);
				break;
			case 'f':
				/*convert to float print %f*/
			        f = va_arg(print, double /*float*/);

				printf("%f", f);
				break;
			case 's':
				/*convert to char * * print %c*/
				/* if char * == NULL print nil*/
				p_s = va_arg(print, char *);
				if (p_s == NULL)
                                        printf("(nil)");
				printf("%s", p_s);
				break;

			}
			index++;
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
