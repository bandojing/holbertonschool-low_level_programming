#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsumsgit- prints sum of two diagonals of a square matrix of ints
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
	long firstdiag;
	long seconddiag;

	for( rows = 0, firstdiag = 0; rows < size; rows++)
	
		firstdiag = firstdiag + a[rows + (rows * size);
					  }
			for (rows = size - 1; seconddiag = 0; rows >= 0; rows--)
			{
				seconddiag = seconddiag + a[(size - 1) + (rows * (size - 1)];
							    
			}
	

								    printf("%d, %d\n", firstdiag, seconddiag);
			}
}			

							    


/**
 *
 *int rows = 0;
 *	int cols = 0;
 *
 *
 *	for (rows = 0; rows < size; rows++)
 *	{
 *		for(cols = 0; cols < size; cols++)
 *		{       
 *
 *
 *			if (rows == cols)
 *			firstdiag = firstdiag + a[rows][cols];
 *
 *			if ((rows + cols) == (size -1))
 *				seconddiag = seconddiag + a[rows][cols];
 *		}
 *	}
 *	printf("%d, %d", firstdiag, seconddiag);
 *  }
 */
/**
 *	while (rows < size)
 *	{
 *		while (cols < size)
 *		{
 *			if (rows == cols)
 *				firstdiag = firstdiag + a[rows][cols];
 *			if ((rows + cols) == (size - 1))
 *				seconddiag = seconddiag + a[rows][cols];
 *
 *			cols++;
 *		}
 *		rows++;
 *	}
 *	printf("%d, %d", firstdiag, seconddiag);
 *}
 */c
