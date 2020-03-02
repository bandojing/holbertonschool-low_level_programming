#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - takes in a number and decrement or increment to 98
 * @n: integer passed during function call
(* a blank line
* Description: -- or ++ to 98
(* section header: Section description)*
* Return: void
*/
void print_to_98(int n)
{
	/*while n is not eqqual to 98*/
	while (n != 98)
	{
		/*print ouf the number*/
		printf("%i, ", n);
		/*if n is greater than 98*/
		if (n > 98)
		{
			/*decrement n*/
			n--;
		}
	/*if n is less than 98 icrement n*/
	else
		n++;
	}
	/*when n is equal to 98 print out 98*/
	printf("98\n");

}
