#include "holberton.h"
/**
 * print_sign- prints sign of an integer -,+ or 0
 *
(* a blank line
* Description: takes in an int an returns 1,0, or - if int is +,-, or 0
(* section header: Section description)*
* Return: returns 1, 0, 0r -1
*/

int print_sign(int n);
{
	if( n > 0)
	{
		putchar(43);
		return(1);
	}
	else if( n == 0)
	{
		putchar(48);
		return(0);
	}
	else if( n < 0)
	{
		putchar(45);
		return(-);
	}
}
