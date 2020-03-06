#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range- a function that creates an array of integers
 * @min: number to start from will be subtracted from max
 * @max: maximum number will determine number of values for output
(* a blank line
* Description: a function that creates an array of integers
(* section header: Section description)*
* Return: returns pointer to new array of numbers
*/
int *array_range(int min, int max)
{
	int arrayindex;
	int *newarray;

	if (min > max)
		return (NULL);

	newarray = malloc(max - min + 1) * sizeof(int));
	if (newarray == NULL)
		return (NULL);

arrayindex = 0;

while (min <= max - min)
{
	newarray[arrayindex] = min + 1;

	arrayindex++;
}

return (newarray);
}
