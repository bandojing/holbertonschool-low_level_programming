#include "holberton.h"
#include <stdio.h>

/**
 * swap_int  - swaps value of pointers
 * @a: pointer holding a value
 * @b: pointer holding a value
* Description: value of *a is transfered to swap
* the value at *b is transfered to *a
* the value held at swap is then transferred to *b
* thus the values of *a and *b have been swapped
(* section header: Section description)*
* Return: returns void
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
