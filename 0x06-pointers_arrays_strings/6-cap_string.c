#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - a function that capitalizes all words of a string
 * @capn: Description of parameter x
(* a blank line
* Description:a function that capitalizes all words of a string
(* section header: Section description)*
* Return: capn a string with caps on the first words
*/

char *cap_string(char *capn)
{

	char oldchar;
	int counter;

	for (counter = 0, oldchar = '0'; capn[counter] != '\0'; counter++)
	{
		if ( oldchar == ',' ||
		     oldchar == ';' ||
		     oldchar == '.'||
		     oldchar == '!'||
		     oldchar == 10||
		     oldchar == 9 ||
		     oldchar == ' '||
		     oldchar == '{'||
		     oldchar == '}'||
		     oldchar == '(' ||
		     oldchar == ')' ||
		     oldchar == '"'||
		     oldchar == '?' ||
		     oldchar == '!' ||
		     counter == 0)
		{
	if (capn[counter] >= 'a' && capn[counter] <= 'z')
		capn[counter] -= 32;
		}
		oldchar = capn[counter];
	}
	return (capn);
}
