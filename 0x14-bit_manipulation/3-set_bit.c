#include "holberton.h"
/**
 * set_bit - sets the bit at a given index to 1
 * @n: a pointer to an int
 * @index: the index of the int *n to change to 1
 *
 * Description: first the index is checked to se if it is less
 * then 64, we can't have a number greater than 64bits
 * we shift 1 to the left index amount of times
 * we use bitwise |, *n | bitsetter, to compare the bits
 * if either is one then *n is set to 1
 * if index is greater than 64bit return -1 because of failure
(* section header: Section description)*
 * Return: Description of the returned value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitsetter;

	while (index < 64)
	{
		bitsetter = 1 << index;

		*n |= bitsetter;
			return (1);

	}
	return (-1);
}
/*create unsigned long bitsetter*/
/*while the index is less than 64 bits*/
/*bitsetter is shifted to the left by the index*/
/*n bitwise or bitsetter*/
/*since bitsetter will be one n|bitsetter will be 1*/
/*the result of bitwise or | is 1 if either of the bits compared*/
/*is equal to 1*/
/* *n |= bitsetter means stor the value one in the pointer *n */
/* if this fails or if index is greater than 64 return -1*/
