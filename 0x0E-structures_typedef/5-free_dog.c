#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees dog struct
 * @d: pointer to dog struct
(* a blank line
* Description: frees up dog structure
(* section header: Section description)*
* Return: returns void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
