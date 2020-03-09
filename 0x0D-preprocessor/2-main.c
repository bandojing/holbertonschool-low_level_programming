#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the name of the file it was compiled from
* Description: prints the name of the file it was compiled from
* Return: prints the name of the file it was compiled from
*/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
