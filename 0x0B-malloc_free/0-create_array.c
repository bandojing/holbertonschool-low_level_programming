#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array with a size of size
 * and initializes it with char c, using malloc
 * @size: determines size of the array
 * @c: character to initialize the array
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: returns pointer to ali if successful
* returns NULL if size is zero
* returns NULL if there is a failure
*/

char *create_array(unsigned int size, char c)
{

	char *ali;
	int arraycounter;

	/*if size is equal to zero return 0*/
	if (size == 0)
		return (NULL);

	/*malloc array of chars with size of size*/
	 ali = malloc(size * sizeof(char));


/*check if array is NULL*/
	 if (ali == NULL)
		 return (NULL);

	while( arraycounter < size)
	{
		ali[arraycounter] = c;

		arraycounter++;
	}

	return (ali);

}
