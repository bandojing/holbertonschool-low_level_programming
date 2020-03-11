#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses the elements of a string
 * @s: string to be reversed
(* a blank line
* Description: reversing or swapping elements within a string so that
* it can be printed out in main function
(* section header: Section description)*
* Return: returns void
*/

void rev_string(char *s)
{


	int length;

	char newstring[999];
	int sinc = 0;
	int newdec;


/* need to find a way to swap values */
/* 1 2 3 4 5 */
/* 5 4 3 2 1 */


/*finding the string length*/
	for (length = 0; s[length] != '\0'; length++)
	{
		newstring[length] = s[length];
	}
	/*subtracting the null byte*/
	length--;

	/*new integer holds the string length*/
	newdec = length;
/*inc and dec the strings*/
	while (sinc <= length)
	{
		s[sinc] = newstring[newdec];
		sinc++;
		newdec--;
	}
	/*adding the null byte*/
	s[sinc++] = '\0';


}
