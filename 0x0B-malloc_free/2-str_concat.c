#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strdup - copies one string to another and returns pointer to copy
 * @s1: string passed in from outside will be copied into newstring
 * @s2: second string
(* a blank line
* Description:  a function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter
(* section header: Section description)*
* Return: returns copy of str
*/

char *str_concat(char *s1, char *s2)
{

	/*int to hold size*/
	int size = 0;

	/*int to hold length of destination string*/
	int lengthsource = 0;

	/*char pointer to hold new string*/
	char *newstring;

	/*int for length of both strings*/
	int lengthofbothstrings = lengthof_s1 + lengthof_s2;

	/*malloc to create space for the length of both strings*/
	newstring = malloc(lengthofbothstrings * sizeof(char));

	/*find length of string*/
	for (lengthof_s1 = 0; dest[lengthof_s1] != '\0'; lengthof_s1++)
	{
	}

	/*find length of second string*/
	for (lengthof_s2 = 0; s2[lengthof_s2] != '\0'; lengthof_s2++)
	{
	}

	/**
	 * while size is zero and size is less than the size that's passed in
	 * and the size of the source is not equal to the null byte increase
	 * the size
	 */
	for (size = 0; size < n && src[size] != '\0'; size++, lengthsource++)
	{
		dest[lengthsource + size] = src[size];
	}
	/*adds the null byte*/
	dest[lengthsource + size] = '\0';

	/*returns the new string*/
	return (dest);

}
