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
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));


	return (0);
}
