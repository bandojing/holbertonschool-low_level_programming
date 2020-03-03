#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strdup - copies one string to another and returns pointer to copy
 * @str: string passed in from outside will be copied into newstring
(* a blank line
* Description:  a function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter
(* section header: Section description)*
* Return: returns copy of str
*/



char *_strdup(char *str)
{

	/*create index counter to find size of string*/
	int indexnumber = 0;
	/*pointer to copy of str*/
	char *newstring;
	int counter;


	if (str == NULL)
		return (NULL);

	/*find the size of the string*/

 	while (str[indexnumber])
 	{
 		indexnumber++;
 	}

	/*allocate memory for the new string*/
	newstring = malloc(indexnumber * sizeof(char));

	/*return null if malloc fails*/
	if (newstring == NULL)
		return (NULL);


	for (counter = 0; str[counter] != '\0'; counter++)
	{
		newstring[counter] = str[counter];
	}

	newstring[counter] = '\0';


	return (newstring);



}
