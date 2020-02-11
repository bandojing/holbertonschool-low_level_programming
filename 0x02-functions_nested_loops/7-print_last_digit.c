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
	int last = ablast % 10;

	if (last < 0)
	{
		last = last * -1;
		_putchar(last + '0');
		return (last);
	}
	_putchar(last + '0');
	return (last);

}
