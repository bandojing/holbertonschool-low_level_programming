#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints the n elements of an array of integers with a newline
 * @a: pointer to an array of integers
 * @n: number of elements to be printed
(* a blank line
* Description: prints n elements of an array of integers with \n
(* section header: Section description)*
* Return: returns void
*/


void print_array(int *a, int n)
{

	int startingline;

	for (startingline = 0; startingline < n; startingline++)
	{
		printf("%d", a[startingline]);

		if (startingline < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
