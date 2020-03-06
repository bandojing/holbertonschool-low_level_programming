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
	int size1 = 0;
	int lengs1 = 0;
	int lengs2 = 0;
	char *newstring;
	int lengthofbothstrings;


	if (s1 != NULL)
	for (lengs1 = 0; s1[lengs1] != '\0'; lengs1++)
	{
	}

	if (s2 != NULL)
	for (lengs2 = 0; s2[lengs2] != '\0'; lengs2++)
	{
	}

	lengthofbothstrings = (lengs1 + lengs2) + 1;

	newstring = malloc(lengthofbothstrings * sizeof(char));

	if (newstring == NULL)
		return (NULL);


	for (size1 = 0; size1 < lengs1; size1++)
	{
		newstring[size1] = s1[size1];
	}

	for (size1 = 0; size1 < lengs2; size1++)
	{
		newstring[size1 + lengs1] = s2[size1];
	}


	newstring[size1 + lengs1] = '\0';

	return (newstring);
}
