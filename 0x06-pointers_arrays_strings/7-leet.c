#include "holberton.h"
#include <stdio.h>
/**
 * leet - swaps letters for numbers
 * @leet: Description of parameter x
(* a blank line
* Description: takes in a string and swapping letters for numbers
(* section header: Section description)*
* Return: returns leet an encoded string
*/



char *leet(char *leet)
{

	char letters[] = {'A', 'a', 'E', 'e', 'T', 't', 'O', 'o', 'L', 'l'};
	char numbers[] = {'4', '4', '3', '3', '7', '7', '0', '0', '1', '1'};


	int counter = 0;
	int index = 0;

	for (counter = 0; leet[counter] != '\0'; counter++)
	{
		for (index = 0; letters[index]; index++)
		{
			if (letters[index] == leet[counter])
			{

			    leet[counter] = numbers[index];
			}
		}
	}
	return (leet);
}
