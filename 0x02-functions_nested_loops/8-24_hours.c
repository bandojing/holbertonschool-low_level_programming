# include "holberton.h"
# include <stdio.h>
/**
 * jack_bauer - counts from 00:00 to 23:59
* Description: counts from 00:00 to 23:59
* Return: returns 0
*/

void jack_bauer(void)
{


	int first;
	int second;

	for (first = 0; first <= 23; first++)
	{
		for (second = 0; second <= 59; second++)
		{
			_putchar(first / 10 + '0');
			_putchar(first % 10 + '0');
			_putchar(':');
			_putchar(second /10 + '0');
			_putchar(second % 10 + '0');
			_putchar('\n');
		}
	}
}
