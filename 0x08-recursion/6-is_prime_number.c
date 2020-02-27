#include "holberton.h"
#include <stdio.h>
/**
 * divisorfindor - tests if number n is prime
 * @n: number to test if prime
 * @divisor: number that n will be divided by
(* a blank line
* Description: checks if n is a prime number
(* section header: Section description)*
* Return: returns 0 if number is not prime returns 1 if number is prime
*/
int divisorfindor(int n, int divisor)
{

	if (divisor < n && n >= 2)
	{
		if (n % divisor == 0)
			return (0);
		return (divisorfindor(n, divisor + 1));
	}

		else if (n < 0 || n == 1)
			return (0);
		else
		return (1);
}

/**
 * is_prime_number - this function determines if a number is prime
 * @n: the number we are testing
(* a blank line
* Description:  a function that returns 1 if the input
* integer is a prime number  otherwise return 0.
(* section header: Section description)*
* Return: returns 0 if not prime number returns 1 if prime number
*/
int is_prime_number(int n)
{
	return (divisorfindor(n, 2));

		}
