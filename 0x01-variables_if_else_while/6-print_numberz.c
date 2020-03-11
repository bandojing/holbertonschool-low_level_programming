#include <stdio.h>

/**
 * main - prints the alphabet in lower case followed by a new line in reverse
 * Return: returns 0
*/

int main(void)
{
	int numbs;

	for (numbs = 0; numbs <= 9; numbs++)
	{
		putchar (numbs + '0');
	}
	putchar ('\n');
	return (0);
}
