#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to name of structure dog
 * @name: pointer to name member of struct dog
 * @age: age member of struct dog
 * @owner: pointer to owner member of dog
(* a blank line
* Description: a function that initialize a variable of type struct dog
(* section header: Section description)*
* Return: returns void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;



}
