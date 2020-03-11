#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Short description, single line
 * @array: pointer to an array
 * @size: size of an array
 * @action: pointer to a function that takes in an int
(* a blank line
* Description: a function that executes a function given as a parameter
* on each element of an array.
(* section header: Section description)*
* Return: returns void
*/
void array_iterator(int *array, size_t  size, void (*action)(int))
{

	unsigned int arraysize = 0;

	if (action != NULL && array != NULL)
		while (arraysize < size)
		{
			action(array[arraysize]);
			arraysize++;
		}
}
