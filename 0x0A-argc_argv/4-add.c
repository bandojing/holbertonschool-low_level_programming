#include <stdio.h>
#include <stdlib.h>
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

        for ( numbersentered = 0; numbersentered < argc; numbersentered++)
	{
		if (argv[numbersentered] < 48 || argv[numbersentered] > 57)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[numbersentered]);
	}
	printf("%i", sum);

        return (0);
}
