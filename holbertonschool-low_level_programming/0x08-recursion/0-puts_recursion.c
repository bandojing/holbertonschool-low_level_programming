#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * @s: pointer to a string
(* a blank line
* Description: a function that prints a string,
* using recursion followed by a new line.
(* section header: Section description)*
* Return: returns a string with \n
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}
}
