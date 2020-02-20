#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - function copies one string into another
 * @dest: destination of src
 * @src: string that will be copied into dest
 * @n: size
(* a blank line
* Description: this is a function that copys a string
(* section header: Section description)*
* Return: returns address of dest
*/




char *_strncpy(char *dest, char *src, int n)
{
	int copycounter = 0;

	for (counter = 0; counter < n && *(src + counter) != '\0'; counter++)
		*(dest + counter) = *(src + counter);

	for ( ; counter < n; counter++)
		*(dest + counter) = '\0';

	return (dest);
}
