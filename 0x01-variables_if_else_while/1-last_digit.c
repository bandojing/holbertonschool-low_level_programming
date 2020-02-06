#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function compares random number
(* a blank line
* Description:prints if last digit is > 5, ==0, and <6 &&!=0
(* section header: Section description)*
* Return: returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is n%10 and is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is n%10 and is 0\n", n);
	}
	else if ((n % 10) < 6  && != 0)
	{
		printf("Last digit of %d is n%10 and is less than 6 and not 0\n", n);
	}
	return (0);
}
