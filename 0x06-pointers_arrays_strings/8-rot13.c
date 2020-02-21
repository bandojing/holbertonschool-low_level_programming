#include "holberton.h"
#include <stdio.h>
/**
 * rot13 -  a function that encodes a string using rot13
 * @rot13: pointer to a string of chars
(* a blank line
* Description: a function that encodes a string using rot13
(* section header: Section description)*
* Return: returns array in rot13 format
*/


char *rot13(char *rot13)
{

char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *encoded = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

/*char *begin = rot13;*/

int itter;
int first_itter;

for (first_itter = 0; rot13[first_itter] != '\0'; first_itter++)
{
	for (itter = 0; letters[itter]; itter++)
	{
		if (letters[itter] == rot13[first_itter])
		{
			rot13[first_itter] = encoded[itter];
			break;
		}
	}
}
	return (rot13);
}
