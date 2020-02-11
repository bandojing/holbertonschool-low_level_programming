#include "holberton.h"

/**
 * print_last_digit  - Short description, single line
 *
(* a blank line
* @ablast: last is integer passed into the function
(* section header: Section description)*
* Return: returns last digit which equals int%10
*/

int print_last_digit(int ablast)
{


	if (ablast < 0)
	{
		return((ablast % 10) * -1);

		_putchar(ablast + '0');

	}
	else if (ablast >= 0)
	{
		return((ablast % 10));
		_putchar(ablast + '0');
	}


	return (0);

}
