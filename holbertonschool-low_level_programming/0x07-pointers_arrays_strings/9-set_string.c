#include "holberton.h"
#include <stdio.h>
/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer
(* a blank line
* Description: copies one value held in a pointer into another value
(* section header: Section description)*
* Return: returns void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
