#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that multiplies two numbers
 * @argc: count of arguments passed from the cmd line
 * @argv: array of arguments passed from the command line
(* a blank line
* Description: a program that prints all arguments it receives
(* section header: Section description)*
* Return: return 0
*/
int main(int argc, char *argv[])
{
	int numbersentered;
	int sum = 0;
	int argarray;
	int argarray_2;
	/*if the number of arguments is equal to one*/
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	/* check to see if any of the arguments in the argv array contain*/
	/*symbols that are not numbers*/
	for (argarray = 1; argarray < argc; argarray++)
	{
		for (argarray_2 = 0; argv[argarray][argarray_2]; argarray_2++)
		{
			if (argv[argarray][argarray_2] < 48 || argv[argarray][argarray_2] > 57)
			{
				printf("Error\n");
				return (-1);
			}
		}
	}
	/*remembert to start from 1 argv[0] is the call to the program ./4add*/
	/*adds all of the numbers entered as arguments and prints the sum*/
	for (numbersentered = 1; numbersentered < argc; numbersentered++)
		sum += atoi(argv[numbersentered]);

		printf("%i\n", sum);

		return (0);

}
