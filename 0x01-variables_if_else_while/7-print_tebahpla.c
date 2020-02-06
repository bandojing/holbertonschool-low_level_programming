#include <stdio.h>

/**
 * main - prints the alphabet in lower case followed by a new line in reverse
 * Return: returns 0
 */

int main(void)
{
	int r;

	for (r= 122; r > 96; r--)
	{
		putchar (r);
	}
	putchar ('\n');

	return (0);
}
