#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area
 * @dest: destination string src will be copied here
 * @src: string that will be copied into dest
 * @n: number of bytes that will be copied
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int memcop;

	for (memcop = 0; memcop <= n; memcop++)
	{
		dest[memcop] = src[memcop];
	}

	return (dest);
}
