#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - a function that returns
 * the length of a string using recursion.
 * @s: string to be counted
(* a blank line
* Description: a function that returns
* the length of a string.
(* section header: Section description)*
* Return: returns length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
