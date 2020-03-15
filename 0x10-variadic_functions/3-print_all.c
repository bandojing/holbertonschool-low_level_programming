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
		unsigned int iterator;
		char c;
		int i;
		float f;
		char *p_s;
		const char *p_formatcopy;
		p_formatcopy = format;

		va_start(print, format);

		while (/*format*/ *p_formatcopy != '\0'/* NULL*/)
		{
			switch (*++p_formatcopy /*format[iterator]*/)
			{

			case '%':
				putchar('%');
				break;
			case 'c':
				c = va_arg(print, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(print, int);
				printf("%i", i);
				break;
			case 'f':
				f = va_arg(print, double);
				printf("%f", f);
				break;
			case 's':
				p_s = va_arg(print, char *);
				switch (p_s == NULL)
				{
				case 1:
					printf("(nil)");
					break;
				case 0:
					printf("%s", p_s);
					break;
				}
				break;
			}
			iterator++;
		}
		printf("\n");
		va_end(print);
}
/*comments moved from code because of line count limits*/
/*after case cchar c = va_arg(print, char);*/
/*convert va_arg to char*/
/*3-print_all.c:34:23: error: ‘char’ is promoted to ‘int’*/
/* when passed through*/
/*‘...’ [-Werror c = va_arg(print, char);*/
/*after case i convert to int and printf*/
/*after case f convert to float print %f*/
/* after s convert to char * * print %c*/
/* if char * == NULL print nil*/
/*end of comments removed from the code because of line count limits*/


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
