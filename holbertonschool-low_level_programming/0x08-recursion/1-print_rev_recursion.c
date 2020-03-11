#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to a string
(* a blank line
* Description: a function that prints a string in
* reverse using recursion followed by a new line.
(* section header: Section description)*
* Return: returns void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
