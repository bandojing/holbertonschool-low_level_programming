#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings
 * @dest: the destination string, to be added to
 * @src: the string that will be added to src
(* a blank line
* Description: adds one string to another, concatenates
(*
* Return: returns dest a pointer to char or array of char
*/




char *_strcat(char *dest, char *src)
{

	int lengthsource = 0;
	int destsource = 0;

	for (lengthsource = 0; dest[lengthsource] != '\0'; lengthsource++)
	{
	}
	for (destsource = 0; src[destsource] != '\0'; destsource++, lengthsource++)
	{
		dest[lengthsource] = src[destsource];
	}
	dest[lengthsource] = '\0';

	return (dest);

}
