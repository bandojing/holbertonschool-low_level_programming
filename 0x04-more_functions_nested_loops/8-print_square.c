#include "holberton.h"
#include <stdio.h>


/**
 * print_square - prints a square size x size
 * @size: integer determines dimensions of the square
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: void
*/
void print_square(int size)
{

	int columns;
	int rows;


	if (size > 0)
	{
	for (rows = 0; rows <= size; rows++)
	{
		for (columnss = 0; columns <= size; columns++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	}
	_putchar(10);


}
