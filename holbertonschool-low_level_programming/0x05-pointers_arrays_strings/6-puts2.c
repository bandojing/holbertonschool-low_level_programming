#include <stdio.h>
#include "holberton.h"
/**
 * puts2 - prints every other character starting with the first char
 * @str: str is a string passed in by main
(*
* Description: prints out every other number in a string of numbers
(*
* Return: void
*/

void puts2(char *str)
{

	int stringleng;

	int everyothernumber = 0;

	while (str[stringleng] != '\0')
	{
		stringleng++;
	}

	stringleng--;

	while (everyothernumber <= stringleng)
	{
		_putchar(str[everyothernumber]);

		everyothernumber += 2;
	}
	_putchar('\n');
}
