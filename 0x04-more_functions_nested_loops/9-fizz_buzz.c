#include "holberton.h"
#include <stdio.h>

/**
 * main - the fizz buzz test
* Description: the fizz buzz test
(* section header: Section description)*
* Return: returns 0
*/

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i %3 == 0 && i %5 == 0)
			printf("Fizz Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
