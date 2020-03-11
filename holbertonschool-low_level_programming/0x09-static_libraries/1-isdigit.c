#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: integer passed to _isdigit
* Return: 1 if c is a digit 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
