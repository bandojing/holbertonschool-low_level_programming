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

	/**
	 * sonnyliston must be unsigned because
	 * it will be compared to an unsigned
	 * int later on
	 */
	unsigned int sonnyliston = 0;

	/*if size is equal to zero return 0*/
	if (size == 0)
		return (NULL);

	/**
	 *dynamically create memory for the array
	 *using malloc
	 */
	ali = malloc(size * sizeof(char));

	/*check if array is NULL*/
	if (ali == NULL)
		return (NULL);

	/*while loop to fill the array with char c*/
	while (sonnyliston < size)
	{
		ali[sonnyliston] = c;
		sonnyliston++;
	}

	return (ali);
}
