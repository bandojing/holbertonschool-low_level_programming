#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses the elements of an array
 * @a: pointer to an array
 * @n: the number of elements in the array
(* a blank line
* Description: reverses the elements within an array
(*
* Return: returns the reversed a
*/


void reverse_array(int *a, int n)
{

	/*variables for indexing and holding values temporarily*/
	int var  = 0;
	int swap = 0;

/* while the temporary index is less than the index of the index passed*/
	while (var <  n / 2)
	{
		/*swap index values*/
		swap = a[var];
		a[var] = a[n - var - 1];
		a[n - var - 1] = swap;
		/*increment the index values*/
		/*decrement the index variable passed in*/

		var++;
	}

}
