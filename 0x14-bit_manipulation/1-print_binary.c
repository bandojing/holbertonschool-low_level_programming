#include "holberton.h"
/**
 * print_binary - prints binary representation of int passed in
 * @n: int passed into function
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/*if n is greater than one*/
	if (n > 1)
		/*call function recursively until 1*/
		print_binary(n >> 1);
		/* n >>  2^1*/
	/*then output the chars*/
	_putchar((n & 1) + '0');
}
