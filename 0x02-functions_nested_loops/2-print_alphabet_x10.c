#include "holberton.h"

/**
 * print_alphabet_x10 - prints a-z 10 times each time w/newline
(*
* Description: function prints out the alphabet using ascii
* prints the alphabet 10 times each time with a newline
*
(*
* Return: returns 0 or void
*/



void print_alphabet_x10(void)
{
	int alpha;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
