#include "holberton.h"

/**
 * _abs - returns absolute value of int passed into it
 *
(* a blank line
* @distancefromzero: the int passed to _abs can be - or +
(*
* Return: returns the positive value of n or absolute value distance from zero
*/

int _abs(int distancefromzero)
{
	if (distancefromzero < 0)
	{
		distancefromzero = distancefromzero * -1;
		return (distancefromzero);
	}
	else
		return (distancefromzero);
}
