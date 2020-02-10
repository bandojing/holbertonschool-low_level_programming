#include "holberton.h"
/**
 * _islower - checks if int c is between 97 and 122
(* a blank line
* Description: checks if int c is lower case or not using ascii values
(* section header: Section description)*
* Return: returns 1 if int c is lower case and 0 if not
*/
int _islower(int c);
{

	if (int c >= 97 && int c <= 122)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
