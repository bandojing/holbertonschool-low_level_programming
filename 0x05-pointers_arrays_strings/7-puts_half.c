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
	int stringleng;
	int halfstring;


	while (str[stringleng] != '\0')
	{
		stringleng++;
	}

	halfstring = stringleng / 2;

	while (str[halfstring] != str[stringleng])
	{
		_putchar(str[halfstring]);
		halfstring++;
	}
	_putchar('\n');
}
