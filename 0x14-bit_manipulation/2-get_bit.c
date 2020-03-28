#include "holberton.h"
/**
 * get_bit - finds the bit at a given index
 * @n: number to find index of
 * @index: bit to find
 (* a blank lin
 * Description: finds the bit value of a number at a given index
 * checks if index is greater than 64, because you unable to shift
 * by more than 64 bits, shifts 1 to left by given index
 * does bitwise and with n and bitfinder to find result
 * Return: -1, 0, or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitfinder;

	if (index >= 64)
		return (-1);

	bitfinder = 1 << index;

	if ((n & bitfinder) == 0)
		return (0);

	else
		return (1);
}
/*if the index is greater than the limit*/
/*return -1*/
/*1 shifted to the left to find the binary of the index*/
/*bitwise and with the binary of n and index*/
/*if the result is 0 then return 0*/
/*if its not return 1*/

