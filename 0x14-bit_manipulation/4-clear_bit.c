#include "holberton.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitclear;

	while (index < 64)
	{
		bitclear = 0 << index;
		*n &= bitclear;
		return (1);
	}
	return (-1);
}

