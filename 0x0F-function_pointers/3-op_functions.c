#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: first integer passed
 * @b: second integer passed
(* a blank line
* Description: adds two integers and
* returns the result
(* section header: Section description)*
* Return: returns an int a+b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts one integer from another a-b
 * @a: first integer passed
 * @b: second integer passed
(* a blank line
* Description: subtracts b from a
(* section header: Section description)*
* Return: returns a-b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- multiplies two integers a and b, a*b
 * @a: first number passed into function
 * @b: second number passed into function
(* a blank line
* Description: multiplies a and b
(* section header: Section description)*
* Return: returns a*b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b, a/b
 * @a: first number passed in
 * @b: second number passed in
(* a blank line
* Description: divides a by b, a/b
(* section header: Section description)*
* Return: returns a/b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - divides a by b and returns the remainder
 * @a: first number passed in
 * @b: second number passed in
(* a blank line
* Description: divided a by b and returns the remainder
(* section header: Section description)*
* Return: returns a % b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
