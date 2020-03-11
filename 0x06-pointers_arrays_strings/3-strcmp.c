#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings and returns an integer
 * @s1: string one for comparison
 * @s2: string two for comparison
(* a blank line
* Description: this function compares two strings
(* section header: Section description)*
* Return: returns the difference in ascii values of s1 and s2
*/

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	/* while the elements in s1 and s2 are not a null byte*/
	/* and while index of s1 is equal to that of s2*/
	/* go through the strings */
	while (s1[index] && s2[index] != '\0' && s1[index] == s2[index])
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
