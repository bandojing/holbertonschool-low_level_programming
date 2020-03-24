#include "lists.h"
/**
  * free_listint2 - free up a linked list set head to null
  * @head: a double pointer to the head
  *
  * Description: funtion that delets a linked list and sets
  * the *head to null
  * Returns: returns void
  */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		temporary = (*head);
		(*head) = (*head)->next;
		/*free(temporary->n);*/
		free(temporary);
	}

	/*head == NULL;*/
}
/*create a temporary struct*/
/* while *head not equal to null*/
/* temporary is a copy of *head */
/*free the n member of the struct in the list*/
/*free the whole node*/
/*set the *head to null*/
