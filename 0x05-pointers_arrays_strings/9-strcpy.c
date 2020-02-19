#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies one string into another
 * @dest: pointer to a char/string the destination of the copy
 * @src: pointer to a char/string the source of the copy
(* a blank line
* Description: _strcpy copies one pointer to char into another pointer to char
(* section header: Section description)*
* Return: return char or the dest array
*/



char *_strcpy(char *dest, char *src)
{

	int src_counter = 0;
	int dest_counter = 0;


	for (src_counter = 0; src[src_counter] != '\0'; src_counter++, dest_counter++)
	{
		dest[dest_counter] = src[src_counter];
	}

	dest[dest_counter] = '\0';

	return (dest);

}
