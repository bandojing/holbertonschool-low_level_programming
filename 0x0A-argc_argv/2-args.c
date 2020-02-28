#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments it recieves
 * @argc: arguments passed from the cmd line
 * @argv: array of arguments passed from the command line
(* a blank line
* Description:  a program that prints all arguments it receives.
(* section header: Section description)*
* Return: return 0
*/
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}


return (0);
}
