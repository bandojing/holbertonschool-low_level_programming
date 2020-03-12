#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func -  the function that selects the correct function to
 * perform the operation asked by the user
 * @s: the string passed in from the user
(* a blank line
* Description: function that selects a function to perform the operation
* asked by the user
(* section header: Section description)*
* Return: returns an integer
*/
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int struct_counter = 0;


	while (struct_counter < 5)
	{

		if (*ops[struct_counter] == *s && s[1] == '\0')
			return (ops[struct_counter].f);
		struct_counter++;
	}
}
