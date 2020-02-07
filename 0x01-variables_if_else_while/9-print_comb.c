#include <stdio.h>
/**
 *main- prints numbers 1-9 with commas inbetween each number
 *numbers are in ascii 0-9 is 48-57 with "space"== 32 and ","== 44
 *Return: returns 0
 */

int main(void)
{


	int  numbers;


	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);

		if (numbers != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(36);

	return (0);
}
