#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - prints out the chessboard
 * @a: a is a two dimensional array
(* a blank line
* Description: prints out the location of the chess pieces in text only
(* section header: Section description)*
* Return: returns void
*/


void print_chessboard(char (*a)[8])
{

	int chessrow;
	int chesscol;

	for (chessrow = 0; chessrow < 8;)
	{
		for (chesscol = 0; chesscol < 8; chesscol++)
		{
			_putchar(a[chessrow][chesscol]);
		}
		_putchar(10);
		chessrow++;
	}
}
