#include "holberton.h"
/**
 * _isalpha - checks if int c is any letter in the alphabet
 *
(* a blank line
* Description: compares alphabet ascii to characters that are not letters
(* returns 0 if they are returns 1 if they are a letter
* Return: return 0 or return 1
*/
int _isalpha(int c)
{

	if (c >= 32 && c <= 64 || c >= 91 && c <= 96 || c >= 123 && c <= 127)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
