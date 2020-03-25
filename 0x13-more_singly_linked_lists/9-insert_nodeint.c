#include "lists.h"
/**
    * insert_nodeint_at_index - inserts a node at the index idx
    * @head: pointer to the beginning of a linked list
    * @idx: the index to insert the node
    * @n: integer to add to the newnode
    *
    * Description: inserts a node at nth position
    * Return: returns newnode
    */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *swapspace;
	unsigned int trav = 0;

	if ((*head) == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

	newnode->n = n;


	if (idx == 0)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return (newnode);
	}

	swapspace = (*head);

	for (trav = 0; trav < idx - 1; trav++)
	{
		if (swapspace == NULL)
		{
			free (newnode);
			return (NULL);
			
		}
		swapspace = swapspace->next;
	}
	newnode->next = swapspace->next;
	swapspace->next = newnode;

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
