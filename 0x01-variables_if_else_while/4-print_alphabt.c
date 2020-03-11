#include <stdio.h>

/**
 * main- prints all alphabet except q and e
* Return: returns 0
*/

int main(void)
{
	char lcase;

	for (lcase  = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != 'e' && lcase != 'q')
		{
			putchar (lcase);
		}
	}
		putchar ('\n');
		return (0);
}
