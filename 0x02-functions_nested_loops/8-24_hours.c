# include "holberton.h"
# include <stdio.h>
/**
 * jack_bauer - counts from 00:00 to 23:59
* Description: counts from 00:00 to 23:59
* Return: returns 0
*/

void jack_bauer(void)
{
	int one;
	int two;
	int three;
	int four;


	for (one = 0; one <= 2; one++)
	{
		for (two = 0; two <= 3; two++)
		{
			for (three = 0; three <= 5; three++)
			{
				for (four = 0; four <= 9; four++)
				{
					printf("%d", one);
					printf("%d", two);
					printf(":");
					printf("%d", three);
					printf("%d", four);
					printf("\n");
				}
			}
		}
	}
}
