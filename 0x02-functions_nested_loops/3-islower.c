#include "holberton.h"
/**
 * _islower - checks if int c is between 97 and 122
(* a blank line
* @c: ascii value of number passed to _islower function
(*
* Return: returns 1 if int c is lower case and 0 if not
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
