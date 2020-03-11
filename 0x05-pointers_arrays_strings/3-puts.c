#include "holberton.h"
#include <stdio.h>
/**
 * _puts - prints a string then a newline takes in a pointer to a string
 * @str: the string to be printed
(* a blank line
* Description: prints a string followed by a newline
(* section header: Section description)*
* Return: returns void
*/

void _puts(char *str)
{

	int stringcounter;

	for (stringcounter = 0; str[stringcounter] != '\0'; stringcounter++)
	{
		_putchar(str[stringcounter]);
	}
	_putchar('\n');
}
