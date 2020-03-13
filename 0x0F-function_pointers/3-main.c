#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function for calculator
 * @argc: number of arguments / argument count
 * @argv: array of arguments
(* a blank line
* Description: calculator main
* checks if there are right number of arguments
* checks if there is an operation being done
* checks if there is a second number
* converts alphabet to integers and returns results of operation
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(int argc, char *argv[])
{
	int (*getoperation)(int, int);
	int firstnumber;
	int secondnumber;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	getoperation = get_op_func(argv[2]);

	if (*getoperation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	secondnumber = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && secondnumber == 0)
	{
		printf("Error\n");
		exit(100);
	}

	firstnumber = atoi(argv[1]);

	printf("%d\n", getoperation(firstnumber, secondnumber));

	return (0);
}
