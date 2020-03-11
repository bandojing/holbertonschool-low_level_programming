#include <stdio.h>
#include "holberton.h"
/**
 * _pow_recursion - raises x to power y
 * @x: base
 * @y: exponent
(* a blank line
* Description:  a function that returns the value
* of x raised to the power of y
(* section header: Section description)*
* Return: returns -1, 1, or results of math
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
