#include <stdio.h>
/**
 * main- outputs 00-99 with commas and space
(* a blank line
* Description: using ascci 0-9 == 48-57, space==32, ,==44
(* section header: Section description)*
* Return: returns 0
*/

int main(void)
{
	int numbers;
	int numbers2;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		for (numbers2 = 48; numbers2 <= 57; numbers2++)
		{
			putchar(numbers);
			putchar(numbers2);
			if (numbers == 57 && numbers2 == 57)
			{
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
