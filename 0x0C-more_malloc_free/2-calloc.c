#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _calloc-  uses malloc to create an array of nmemb * size elements
 * @nmemb: size of elements passed into function, number of elements
 * @size: size of bytes of spaces to be used for elements
(* a blank line
* Description:  a function that allocates memory for an array, using malloc
* nmenb = number of elements  size = size of bytes or spaces for each element
(* section header: Section description)*
* Return: pointer to an array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int elements;
	char *callocarray;
	/*unsigned int totalsize;*/

	if (nmemb == 0 || size == 0)
		return (NULL);


	callocarray = malloc(nmemb * size);
	if (callocarray == NULL)
		return (NULL);

	/*totalsize = nmemb * size;*/
	elements = 0;
	while (elements < nmemb * size)
	{
		callocarray[elements] = '0';
		elements++;
	}


	return (callocarray);
}
