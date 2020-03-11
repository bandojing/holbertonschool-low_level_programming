#include "holberton.h"
#include <stdio.h>
/**
 * iamroot - function finds square root of n
 * @n: number passed from sqrtrecursion
 * @x: number that will be * by its self
(* a blank line
* Description: multiplies x * x until it it equal
* to n, then returns x or -1 if there is no natural
* square
(* section header: Section description)*
* Return: Description of the returned value
*/


int iamroot(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (iamroot(n, x + 1));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root
 * of a given number.
 * @n: number to find natural square root of
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: returns the square root of n
*/
int _sqrt_recursion(int n)
{
	return (iamroot(n, 1));
}

