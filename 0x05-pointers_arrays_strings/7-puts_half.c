#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string passed in
(* a blank line
* Description: takes in an string, finds length of string, outputs string/2
* until the end of the string is reached
(* section header: Section description)*
* Return: return void
*/

void puts_half(char *str)
{
	int stringleng = 0;
	int n = 0;


	while (str[stringleng] != '\0')
	{
		stringleng++;
	}
	stringleng--;

	if (stringleng % 2 != 0)
	{
		n = (stringleng - 1) / 2;
		n++;
	}
	else
		n = stringleng / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
