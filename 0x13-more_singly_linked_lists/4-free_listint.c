#include "lists.h"
/**
 * free_listint - free up a linked list
 * @head: pointer to head of a liinked list passed in
 *
 * Description: function that deletes a linked list
 * Return: returns void
 */


void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		/*free(temporary->n);*/
		free(temporary);
	}
}
/*create a temporary struct*/
/*while the head pointer is not null*/
/*the the temporary pointer points to head*/
/*traverse to the next node*/
/*delete the data member of the node at the address that temporary points to*/
/*delete the node at the address  that temporary points to*/
