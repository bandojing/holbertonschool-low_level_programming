#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - size determines size of triangle printed with #
 * @size: size determines size of triangle
(* a blank line
* Description: size determines size of triangle
* Return: returns void
*/


void print_triangle(int size)
{

	int printspaces;
	int row;
	int printhash;


	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (printspaces = size; printspaces >= row; printspaces--)
			{
				_putchar(32);
			}
			for (printhash = 1; printhash <= row; printhash++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
