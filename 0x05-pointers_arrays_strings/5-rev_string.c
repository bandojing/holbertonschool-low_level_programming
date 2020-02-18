#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string
 * @s: string being passed in that will be reversed
* Description: this function reverses a string
* Return: returns void
*/


void rev_string(char *s)
{


	int length;

	char newstring[999];
	int sinc = 0;
	int newdec;

	/* need to find a way to swap values
	   1 2 3 4 5
	   5 4 3 2 1 */

/*finding the length of the string*/
/*incrementing length to get the lenght of the string*/
	/*setting up length of string and making another
	  string of the same size*/
	for (length = 0; s[length] != '\0'; length++)
	{
		newstring[length] = s[length];
	}
	/*subtracting the null byte*/
	length--;

	/*making the index number for newstring equal to
	  the length of the string*/
	newdec = length;

	while(sinc <= length)
	{
		s[sinc] = newstring[newdec];
		sinc++;
		newdec--;
	}
	s[sinc++] = '\0';


/** def need to do
 * swap = *a
 * *a = *b
 * *b = swap
 */
}
