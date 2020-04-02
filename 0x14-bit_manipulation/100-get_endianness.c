#include "holberton.h"
#include <stdio.h>
/**
 * get_endiannes - checks the endiannes of the system you are using
*
* Description: checks the endiannes of the systme you are using
* Return: returns 1 if little endian 0 if big endian
*/
int get_endianness(void)
{
	unsigned int determinant = 1;
	char *endianness = (char*) &determinant;
	return (int)*endianness;

	/*if (*endianness)*/
	/*{*/
	/*	printf("Little Endian\n");*/
	/*	return (1);*/
	/*}*/
	/*else*/
	/*{*/
	/*	printf("Big Endian\n");*/
	/*}*/
	/*	return (0);*/
}
