#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - Short description, single line
 * @n: Description of parameter x
(*
* Description:print/
(*
* Return: void
*/


void print_diagonal(int n)
{
	int rows;
	int columns;
	if( n > 0)
	{
	for (rows = 0; rows < n; rows++)
	{
		for (columns = 0; columns < rows; columns++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}

