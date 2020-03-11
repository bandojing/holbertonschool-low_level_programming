#include <stdio.h>

/**
 * main - prints the alphabet in lower case followed by a new line in reverse
 * Return: returns 0
 */

int main(void)
{
	int numbs;

	for (numbs = 122; numbs >= 97; numbs--)
	{
		putchar (numbs);
	}
	putchar ('\n');

	return (0);
}
