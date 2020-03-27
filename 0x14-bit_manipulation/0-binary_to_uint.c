#include "holberton.h"
/**
 * binary_to_uint - converts binary to unsigned int/decimal
 * @b: pointer to string
 *
 * Description: gets lenght of string, checks if there is
 * anything besides 0 or 1 in string converts char to int
 * and converts binary to unsigned int/decimal and returns
 * it
 * Return: returns unsigned int / decimal
 */
unsigned int binary_to_uint(const char *b)
{

unsigned int sum2 = 0;
int counter = 0;
int checker = 0;
char letterchar;
int lettertoint;
int counter2 = 0;
int i = 0;


if (b == NULL)
	return (0);

/*get length*/
for (counter = 0; b[counter] != '\0'; counter++)
{
}
/*check if 0 or 1*/
for (checker = 0; checker <= counter - 1 ; checker++)
{
	if (b[checker] != '0' && b[checker] != '1')
	{
		return (0);
	}
}

/*convert to int then output sum*/
for (counter2 = counter - 1; counter2 >= 0; counter2--, i++)
{
	letterchar = b[counter2];
	lettertoint = letterchar - '0';
	sum2 += lettertoint << i/*counter2*/;

}
return (sum2);

/*printf("sum of letter is %d\n", sum2);*/
}
