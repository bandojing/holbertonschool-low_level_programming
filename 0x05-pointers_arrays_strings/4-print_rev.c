#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - outputs a string in reverse
 * @s: dereferenced pointer to a char
* Description: count through the string forwards to get the string length
* transfer this value to another integer, decrement this new integer in
* a for loop to get the reverse order
(* section header: Section description)*
* Return: Description of the returned value
*/



void print_rev(char *s)
{

	int stringcounter;
	int transfercounter;

for (stringcounter = 0; s[stringcounter] != '\0'; stringcounter++)
{
	transfercounter = stringcounter;
}

for (transfercounter = stringcounter; transfercounter >= 0; transfercounter--)
{
	_putchar(s[transfercounter]);
}

_putchar('\n');
}
