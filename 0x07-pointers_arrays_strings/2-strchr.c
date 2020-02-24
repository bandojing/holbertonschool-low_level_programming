#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: string that is passed in
 * @c: character that you are searching s for
(* a blank line
* Description: a function that locates a character in a string
(* section header: Section description)*
* Return: returns s if char c is found in string, NULL if not
*/

char *_strchr(char *s, char c)
{
	for (; s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
