#include "holberton.h"
/**
 * print_alphabet - this function prints a-z using for loop and putchar
(*
* Description: the function prints out the alphabet using ascii values
*
(*
* Return: returns 0
*/

	void  print_alphabet(void)
	{
		int alpha;


		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
