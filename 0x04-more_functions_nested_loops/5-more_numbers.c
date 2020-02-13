#include "holberton.h"
/**
 * more_numbers - prints 0-14 ten times with a newline
(* a blank line
* Description: uses nested for loops with an if statement to print 0-14 with \n
(*
* Return: returns void
*/

void more_numbers(void)
{
	int counter;
	int number;

	for (counter = 0; counter <= 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
			_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar(10);
	}
}
