#include "holberton.h"
/**
 * times_table - outputs times table 0-9
 * @void:returns void
(* a blank line
* Description: outputs 0-9 times table
(*
* Return: returns void
*/


void times_table(void)
{

	int r;
	int c;
	int o = 0;
	int t = 0;
	int n = 0;
	int mu = 0;


	for (c = 0; c < 10; c++)
	{
		for (r = 0; r < 10; r++)
		{
			n = r * mu;
			o = n % 10;
			t = n / 10;
			if (t != 0)
				_putchar(t + '0');
			_putchar(o + '0');
			if (r != 9 && ((r + 1) * mu) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (r != 9 && ((r + 1) * mu) >= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		mu++;
		r = 0;
	}
}
