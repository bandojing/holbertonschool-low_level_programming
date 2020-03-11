#include <stdio.h>

/**
 * main - prints 0123456789abcdef
* Return: returns 0
*/

int main(void)
{
	int numbs;
	char bets = 'a';


	for (numbs = 0; numbs <= 9; numbs++)
	{
		putchar (numbs + '0');
	}

	for (bets = 'a'; bets <= 'f' ; bets++)
	{

		putchar (bets);
	}

	putchar ('\n');

	return (0);

}
