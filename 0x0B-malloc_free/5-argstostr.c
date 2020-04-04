#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument array
 *
* Description: a function that concatenates all the arguments of the program
(* section header: Section description)*
* Return: returns null
*/
char *argstostr(int ac, char **av)
{
	int counter;

	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}

	for (counter = 0; counter < ac; counter++)
	{
		printf("%s\n", av[counter]);
	}

	return (0);
}
