#include <stdio.h>

/**
 * main - prints out alphabet all uppercase
 * Return: returns 0
 */

int main(void)
{
	int lowercase;
	int uppercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		putchar (lowercase);
	}
	for (uppercase = 65; uppercase < 91; uppercase++)
	{
		putchar (uppercase);
	}

	putchar ('\n');

	return (0);

}
