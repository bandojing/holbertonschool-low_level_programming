#include <stdio.h>
#include <holberton.h>
#include <stdlib.h>
/**
 * main - returns the name of the file it was compiled from
 * @void: this function has nothing passed to it
(* a blank line
* Description: prints the name of the file it was compiled from
(* section header: Section description)*
* Return: prints the name of the file it was compiled from
*/

int main(void)
{
	printf("%s\n", __FILE__);

	return(0);
}
