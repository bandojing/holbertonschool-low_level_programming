#include <stdio.h>
/**
 * main - prints the alphabet in lower case followed by a new line
 * Return: returns 0
 */
int main(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
	{
	putchar (alpha);
	}
	putchar ('\n');

	return (0);

}
