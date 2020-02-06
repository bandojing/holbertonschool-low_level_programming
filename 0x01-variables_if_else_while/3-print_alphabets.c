#include <stdio.h>

/**
 * main - prints out alphabet all uppercase
 * Return: returns 0
 */

int main(void)
{

	int alpha;

	for (alpha = 65; alpha < 91; alpha++)
	{
		putchar (alpha);
	}
	putchar ('\n');

	return (0);

}
