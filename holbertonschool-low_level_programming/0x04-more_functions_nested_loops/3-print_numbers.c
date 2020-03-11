#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints the numbers 0-9 followed with newline
(*
* Description: this function outputs the number 0-9 then newline
* Return: returns void outputs numbers 0-9 with newline character
*/


void print_numbers(void)
{
	int count;


	for (count = 48; count <= 57; count++)
	{
		_putchar (count);
	}
	_putchar (10);
}
