#include "holberton.h"
/**
 * clear_bit - changes bit at given index to 0
 * @n: int that will have it's index changed
 * @index: index of n to change to 0
 *
 * Description: this function changes the given index of a
 * number *n to zero, please see line by line comments below
 * Return: 1 if successful -1 if there is a failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitclear;



	while (index < 64)
	{
		bitclear = 1 << index;

		bitclear = ~bitclear;

		*n &= bitclear;

		return (1);
	}

	return (-1);
}
/* while the index is less than 64*/
/*has to be less than 64 because we can't go beyond 64bits*/
/*shift 1 to the left by index*/
/*left shift is same as 1 << 2^index*/
/*bitclear will always be 1 at most signigicant digit*/
/*now using ~ 'not' or 1's compliment we flip the 1 to a 0*/
/*using bitwise and '&' we compare n & bitclear, n & 0*/
/* 1 & 0 = 0, 0 & 0 = 0, 1 & 1 = 1, 0 & 1 = 0*/
/* *n & 0 will always be 0*/
/* 0 is the value stored at *n */
/* return 1 because this procedure was successful*/
/* if it's not and index is greater than or equal to 64bits */
/* return -1 to signal a failure*/
