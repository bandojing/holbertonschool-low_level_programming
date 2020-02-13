#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - this function prints out 0-9 skipping over 2 and 4
(*
* Description: prints out numbers 0-9 skipping 2 and 4
(*
* Return: returns void
*/

void print_most_numbers(void)
{

	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		if (numb != 50 && numb != 52)
		{
			_putchar(numb);
		}

	}
	_putchar('\n');

}
