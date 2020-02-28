#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file with ./
 * @argc: number of items listed in the command line
 * @argv: an array of strings entered
(* a blank line
* Description: this program prints the name of the program
(* section header: Section description)*
* Return: returns 0
*/
int  main(int argc, char *argv[])
{

	printf("%s\n", argv[0]);
	argc++;

	return (0);
}
