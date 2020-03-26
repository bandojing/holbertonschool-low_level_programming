#include "holberton.h"



unsigned int binary_to_uint(const char *b)
{	
	/*unsigned int counter;*/
	/*unsigned int decimal;*/
	int scan = 0;
	int scan2 = 0;
	unsigned int decimal = 0;
	int base = 1;
	unsigned int last;
	unsigned int number;

	/*check if string is null*/
	if (b == NULL)
		return (0);

	/*scan through and check if char in string is 0 or 1*/
	for (scan = 0; b[scan] != '\0'; scan++)
	{
		if (b[scan] != '0' || b[scan] != '1')
			return (0);
	}
	
	/*loop through to end of string*/
	for (scan2 = 0; b[scan2] != '\0'; scan2++)
	{ 	
		/*convert char to int*/
		number = b[scan2] - 48;
		
		/*get remainder of divided by 10*/
		last = number % 10;

		/*number now is result of / by 10*/
		number = number / 10;

		/*decimal value of number*/
		decimal = decimal + last * base;
		
		/*mult base by two*/
		base = base * 2;
	}

	/*when its over return the number*/
	return (decimal);

}
	/** int res = 0; // Initialize result 
	  *   // Iterate through all characters of input string and 
	  *  // update result 
	  *   for (int i = 0; str[i] != '\0'; ++i)
	   *  {
	*	             res = res * 10 + b[i] - '0';
*
*			     int temp = num;
*
*			     while (temp)
*			     {
*				     int last_digit = temp % 10;
*				     temp = temp / 10;
*
*				     dec_value = dec_value + last_digit * base;
*
*				     base = base * 2;
*			     }
*
*			     _putchar(base + '0');
*	     }
*	       
*	         // return result. 
*	         return res; 
*/


