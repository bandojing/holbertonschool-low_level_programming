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


char *rot13(char *rot)
{

char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *encoded = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

char *begin = rot;

int itter;
int counter;

while (*(begin++))
{
	for (itter = 0; letters[itter]; itter++)
	{
		if (letters[itter] == *begin)
		{
			*begin = encoded[itter];
			break;
		}
	}
}
	return (rot);
}
