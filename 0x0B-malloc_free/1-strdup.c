#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies one string to another and returns pointer to copy
 * @str: string passed in from outside will be copied into newstring
(* a blank line
* Description:  a function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter
(* section header: Section description)*
* Return: returns copy of str
*/



char *_strdup(char *str)
{
	int indexnumber = 0;
	char *newstring;
	char *string;

	if (str == NULL)
		return (NULL);

	while (str[indexnumber] != '\0')
		indexnumber++;
	indexnumber++;

	newstring = (char *)malloc(sizeof(char) * indexnumber);

	if (newstring == NULL)
		return (NULL);

	string = newstring;

	while (*str)
	{
		*string = *str;
		string++;
		str++;
	}

	*string = '\0';

	return (newstring);
}
