#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: pointer to an array
 * @size: size of an array
 * @cmp: pointer to a function that takes in an int
(* a blank line
* Description:  a function that searches for an integer
* on each element of an array.
(* section header: Section description)*
* Return: returns an integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int array_index = 0;

	if (*array != NULL || *cmp != NULL)

	if (size <= 0)
		return (-1);

	for (array_index = 0; array_index < size; array_index++)
	{
		if (cmp(array[array_index]) != 0)
			return (array_index);

	}

	return (-1);
}
