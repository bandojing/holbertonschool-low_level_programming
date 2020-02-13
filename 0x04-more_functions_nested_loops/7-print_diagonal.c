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
	int i;
	int a;

	for (i=0; i < n; i++)
	{
		for (a=0; a < i; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

