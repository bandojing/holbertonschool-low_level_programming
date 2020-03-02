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

	if (argc < 2)
	{
		printf("0\n");
		return(0);
	}



/**
 *	if (isdigit(argv[nume if (argc > 1)
 *			    {
 *				    for (numbersentered = 0; numbersentered < argc; numbersentered++)
 *				    {
 *					    sum += atoi(argv[numbersentered]);
 *				    }
 *				    printf("%d\n", sum);
 *
 *				    return (0);rsentered]) == 0)
 *		printf("0\n");
 */
	for (argarray = 1; argarray < argc; argarray++)
	{
		for(argarray_2 = 0; argv[argarray][argarray_2]; argarray_2++)
		{
			if (argv[argarray][argarray_2] < 48 || argv[argarray][argarray_2] > 57)
			{
				printf("Error\n");
				return(-1);
			}
		}
	}

	for (numbersentered = 1; numbersentered < argc; numbersentered++)
/**
 *	if (argc > 1)
 *		for (numbersentered = 0; numbersentered < argc; numbersentered++)
 *		{
 *			if (isalpha(argv[numbersentered]))
 *			    printf("Error\n");
 *			    return (-1);
 */			sum += atoi(argv[numbersentered]);

		printf("%i\n", sum);

		return (0);
/**
 *	for (numbersentered = 0; numbersentered < argc; numbersentered++)
 *	{
 *		if (argv[numbersentered] < 48 || argv[numbersentered] > 57)
 *			printf("Error\n");
 *			return (1);
 *		}
 *
 *		sum += atoi(argv[numbersentered]);
 *	}
 *	printf("%i", sum);
 */
	return (0);
}
