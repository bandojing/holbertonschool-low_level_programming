#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: pointer to a string passed in
 * @accept: a pointer to a string
(* a blank line
* Description:  a function that searches a string for any of a set of bytes
(* section header: Section description)*
* Return: returns s  or returns NULL
*/


char *_strpbrk(char *s, char *accept)
{
	int acceptcount;
	/* increment through *s until null byte is reached*/
	while (*s != '\0')
	{       /* loop through the indexes of accept string until null byte*/
		for (acceptcount = 0; accept[acceptcount] != '\0'; acceptcount++)
		{       /*if index s == index of accept*/
			if (*s == accept[acceptcount])
				return (s);
		}
		s++;
	}
	return (NULL);
}
