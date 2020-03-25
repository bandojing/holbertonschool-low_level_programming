#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *swapspace;

	
	unsigned int trav = 0;
       
	newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
				return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 1)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return (newnode);
	}

	swapspace = (*head);

	for (trav = 0; trav < idx; trav++)
	{
		swapspace = swapspace->next;
	}
	newnode->next = swapspace->next;
	newnode->next = newnode;

	return (newnode);
}
/*two new nodes/struct newnode and swapspace*/
/*unsigned int to act as counter*/
/*malloc for size of listint_t if null return null*/
/*fill up the struct*/
/*n member == to int n, ->next member == null*/
/*if the index is 1*/
/*make the new node next member point to the head*/
/*move the head pointer to newnode, it becomes the head*/
/*return the newnode*/
/*other wise traverse the list til index-2*/
/*move the swap pointer to swapspace next*/
/*make the newnode next pointer point to swap next*/
/*make the new node next pointer point to the newnode*/
