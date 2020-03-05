
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: an unsigned int passed into the function
(* a blank line
* Description: a function that allocates memory using malloc
(* section header: Section description)*
* Return: pointer to assigned memory
*/
void *malloc_checked(unsigned int b)
{

	unsigned int *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
