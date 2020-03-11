#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - changes lower case letters to uppercase
 * @alpha: the name of the string pointer  passed into function
(* a blank line
* Description:changes all lowercase letters of the string to uppercase
(*
* Return: returns a with all lowercase letters set to uppercase
*/


char *string_toupper(char *alpha)
{

	int counter = 0;

	while (alpha[counter])
	{
		if (alpha[counter] >= 'a' && alpha[counter] <= 'z')
	{
		alpha[counter] -= 32;
	}
		counter++;
	}
	return (alpha);

}
