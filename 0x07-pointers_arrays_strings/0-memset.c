#include "holberton.h"
#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @s: array passed into memset
 * @b: char passed into memset
 * @n: unsigned integer passed into memset
(* a blank line
* Description: fills memory with constant byte s
(* section header: Section description)*
* Return: returns s
*/



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int memsetter;

	for (memsetter = 0; memsetter < n; memsetter++)
	{
		s[memsetter] = b;
	}

	return (s);
}
