#include "holberton.h"
#include <stdio.h>


/**
 * print_square - prints a square size x size
 * @size: integer determines dimensions of the square
(* a blank line
* Description: takes in the size of the square if size is 0 prints only newline
* Return: void
*/
void print_square(int size)
{

	int columns;
	int rows;


	if (size > 0)
	{
	for (rows = 1; rows <= size; rows++)
	{
		for (columns = 1; columns <= size; columns++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	}
	else
	_putchar(10);

}
