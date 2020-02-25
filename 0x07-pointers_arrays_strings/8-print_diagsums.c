#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums- prints sum of two diagonals of a square matrix of ints
 * @a: pointer to an array of numbers
 * @size: integer representing the size of the array [size][size]
(* a blank line
* Description:  function that prints the sum of the two diagonals of a square
* matrix of integers
(* section header: Section description)*
* Return: returns void
*/



void print_diagsums(int *a, int size)
{
	int firstdiag;
	int seconddiag;


	int rows = 0;
	int cols = 0;

	while (rows < size)
	{
		while (cols < size)
		{
			if (rows == cols)
				firstdiag = firstdiag + a[rows][cols];
			if ((rows + cols) == (size - 1))
				seconddiag = seconddiag + a[rows][cols];

			cols++;
		}
		rows++;
	}
	printf("%d, %d", firstdiag, seconddiag);
}
