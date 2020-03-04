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
	int size = 0;
	int leng_s1, leng_s2;
	int size2 = 0;
	char *newstring;
	int lengthofbothstrings;

	for (leng_s1 = 0; s1[leng_s1] != '\0'; leng_s1++)
	{
	}

	for (leng_s2 = 0; s2[leng_s2] != '\0'; leng_s2++)
	{
	}

	lengthofbothstrings = (leng_s1 + leng_s2) + 1;

	newstring = malloc(lengthofbothstrings * sizeof(char));

	if (newstring == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (size = 0, size2 = 0; s1[size2] != '\0'; size++, size2++)
		{
			newstring[size] = s1[size2];
		}
	}

	if (s2 != NULL)
	{
		for (size2 = 0; s2[size2] != '\0'; size2++, size++)
		{
			newstring[size] = s2[size2];
		}
	}
	newstring[size] = '\0';

	return (newstring);
}
