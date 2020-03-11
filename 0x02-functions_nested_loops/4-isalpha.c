#include "holberton.h"
/**
 * _isalpha - checks if int c is any letter in the alphabet
 *
(* a blank line
* @c: is an integer that will become an ascii value
(* returns 0 if they are returns 1 if they are a letter
* Return: return 0 or 1
*/
int _isalpha(int c)
{

	if (c >= 65  && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
