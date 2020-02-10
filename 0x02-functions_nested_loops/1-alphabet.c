#include <stdio.h>
/**
 * print_alphabet - this function prints a-z using for loop and putchar
(*
* Description: the function prints out the alphabet using ascii values
*
(*
* Return: returns 0
*/

	void  print_alphabet(void)
	{
		int alpha;


		for (alpha = 97; alpha <= 122; alpha++)
		{
			putchar(alpha);
		}

		

	}



/**
 * main- calls to print_alphabet function
(*
* Description: print alphabet prints alphabet then a newline is printed
*
(*
* Return: int main returns void print alphabet returns void
*/
	int main(void)
	{


	print_alphabet();
	putchar('\n');
	return (0);

	}
