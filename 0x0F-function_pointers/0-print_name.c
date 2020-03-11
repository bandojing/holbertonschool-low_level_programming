#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name passed into the printname function
 * @f: pointer to function
(* a blank line
* Description: a function that prints a name.
(* section header: Section description)*
* Return: return void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
