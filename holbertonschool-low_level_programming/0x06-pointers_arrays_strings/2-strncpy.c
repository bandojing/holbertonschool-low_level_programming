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
	int copy = 0;

	for (copy = 0; copy < n && *(src + copy) != '\0'; copy++)
		*(dest + copy) = *(src + copy);

	for ( ; copy < n; copy++)
		*(dest + copy) = '\0';

	return (dest);
}
