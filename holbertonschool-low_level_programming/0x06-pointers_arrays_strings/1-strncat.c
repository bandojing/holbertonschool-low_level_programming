#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination string, to be added to
 * @src: the string that will be added to src
 * @n: size
(* a blank line
* Description: adds one string to another, concatenates
(*
* Return: returns dest a pointer to char or array of char
*/




char *_strncat(char *dest, char *src, int n)
{
	/*int to hold size*/
	int size = 0;

	/*int to hold length of destination string*/
	int lengthsource = 0;

	/*find length of string*/
	for (lengthsource = 0; dest[lengthsource] != '\0'; lengthsource++)
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
