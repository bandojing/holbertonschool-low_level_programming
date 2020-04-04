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
	char **string_return;
	int stringlen;
	int counter1;

	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}
	
	while (av != NULL)
	{
		stringlen++;
	}
	
	string_return = malloc((stringlen/* + 1*/) *(sizeof(char)));
	if (string_return == NULL)
	{
		return (NULL);
	}

	for (counter1 = 0; counter1 < (stringlen/* + 1*/); counter1++)
	{
		string_return[counter1] = av[counter1];
	}

	for (counter = 0; counter < ac; counter++)
	{
		printf("%s\n", string_return[counter]);
	}

	return (*string_return);
}
