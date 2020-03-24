#include "lists.h"
/**
  * pop_listint - deletes the head node and returns it's data
  * @head: a double pointer to head
  *
  * Description: function that deletes the head node
  * of a linked list and returns it's data
  * Return: returns an integer that holds the head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *nodecopy;
	int nodedata = 0;

	if (*head == NULL)
		return (NULL);

	nodecopy = (*head);
	(*head) = (*head)->next;
	nodedata = nodecopy->n;
	free(nodecopy);

	return (nodedata);
}
/*create a struct*/
/*creat an int to hold the node data*/
/*if head pointer is equal to null*/
/*return null*/
/*make nodecopy point to same address of head*/
/*move the head pointer to the next node*/
/*copy the nodemember data n to nodedata*/
/*free the node*/
/*return the data*/
