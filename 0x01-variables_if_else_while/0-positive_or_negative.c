#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - tests to see if random number is <0,>0 or ==0
* Return: returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d  is positive\n", n);
	}
		else if (n == 0)
		{
			printf("%d  is zero\n", n);
		}

	return (0);
}
