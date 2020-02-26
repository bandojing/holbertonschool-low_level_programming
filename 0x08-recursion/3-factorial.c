#include "holberton.h"
#include <stdio.h>
/**
 * factorial - finds the factorial of int n using
 * recursion
 * the length of a string using recursion.
 * @n: int to find factorial of
(* a blank line
* Description: returns the factorial of n using
* recursion
* the length of a string.
(* section header: Section description)*
* Return: returns factorial of n
*/

int factorial(int n)
{

	if (n < 0)

		return (-1);
	else if (n == 0)

		return (1);

	return (n * factorial(n - 1));
}
