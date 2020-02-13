#include "holberton.h"
#include <stdio.h>
/**
 * print_line - prints _ character n number of times if n == 0 prints only \n
 * @n: Description of parameter x
(* a blank line
* Description: prints _ n number of times if n is 0 prints newline
(*
* Return: void
*/





void print_line(int n)
{


	while (n > 0)
	{
		if (n == 0)
		{
			_putchar('\n');
		}


		_putchar('_');
		n--;
	}

	_putchar(10);
}
