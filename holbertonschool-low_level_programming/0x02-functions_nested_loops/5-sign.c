#include "holberton.h"
/**
 * print_sign- prints sign of an integer -,+ or 0
 *
 * a blank line
 * @n: int passed into print_sign
 * section header: Section description)*
 * Return: returns 1, 0, 0r -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
