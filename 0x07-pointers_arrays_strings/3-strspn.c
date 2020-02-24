#include "holberton.h"
#include <stdio.h>
/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: array that is passed in and searched for matches
 * @accept: second array passed in for matches
(* a blank line
* Description: goes through first string until there is a space
* goes through second string until there is a null byte
* compares the index values of each array adds one to
* bytecount if there are matches, returns bytecount
(* section header: Section description)*
* Return: returns bytecount, the number of times there are matches
*/

unsigned int _strspn(char *s, char *accept)
{
	int counter1;
	int counter2;
	int bytecount;


	for (counter1 = 0; s[counter1] != ' '; counter1++)
	{
		for (counter2 = 0; accept[counter2] != '\0'; counter2++)
		{
			if (s[counter1] == accept[counter2])
			{
				bytecount++;
			}
		}
	}
	return (bytecount);
}
