#include <stdio.h>
#include <unistd.h>

/**
 * main  - writes to the standard error
 *
 * Description: writes sentence to std output
 * section header: Section description
 * Return: returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful", 31);
	write(2, "- Dora Korpar, 2015-10-19\"\n", 27);

	return (1);
}
