#include <stdio.h>
void __attribute__ ((constructor)) calledFirst();
/**
 * calledFirst - prints before main exits
 * @void: accepts nothing as an argument
 (* a blank line
 * Description: uses __attribute__((constructor)) calledFirst();
 * this allows for this function to print before main exits
 (* section header: Section description)*
 * Return: returns void
 */
void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

