#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to dog struct
(* a blank line
* Description: a function that prints a struct dog
(* section header: Section description)*
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == '\0')
		printf("NAME: (nil)\n");
	else
		printf("NAME: %s\n", d->name);

	if (d->age == '\0')
		printf("AGE: (nil)\n");
	else
		printf("AGE: %f\n", d->age);

	if (d->owner == '\0')
		printf("OWNER: (nil)\n");
	else
		printf("OWNER: %s\n", d->owner);
}
