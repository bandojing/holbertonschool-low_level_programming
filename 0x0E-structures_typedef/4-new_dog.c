#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str);
/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
(* a blank line
* Description:  a function that creates a new dog.
* space in memory, which contains a copy of the string given as a parameter
(* section header: Section description)*
* Return: returns struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;
	char *copy_owner;
	char *copy_name;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	copy_owner = _strdup(owner);
	copy_name = _strdup(name);

	if (copy_owner == NULL || copy_name == NULL)
	{
		free(copy_owner);
		free(copy_name);
		free(dog);

		return (NULL);
	}

	dog->name = copy_name;
	dog->age = age;
	dog->owner = copy_owner;

	return (dog);
}
/**
 * _strdup - copies one string to another and returns pointer to copy
 * @str: string passed in from outside will be copied into newstring
(* a blank line
* Description:  a function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter
(* section header: Section description)*
* Return: returns copy of str
*/
char *_strdup(char *str)
{
	int indexnumber = 0;
	char *newstring;
	char *string;

	if (str == NULL)
		return (NULL);

	while (str[indexnumber] != '\0')
		indexnumber++;
	indexnumber++;

	newstring = (char *)malloc(sizeof(char) * indexnumber);

	if (newstring == NULL)
		return (NULL);

	string = newstring;

	while (*str)
	{
		*string = *str;
		string++;
		str++;
	}

	*string = '\0';

	return (newstring);
}

