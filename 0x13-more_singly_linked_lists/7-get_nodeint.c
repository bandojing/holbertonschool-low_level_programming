#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node of the linked list
  * @head: the first node of linked list passed into function
  * @index: node to find
  *
  * Description: a function that returns the nth node of a linked list
  * Return: returns the address of a node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count_the_nodes = 0;
	listint_t *headcopy;


	if (head == NULL)
		return (NULL);

	headcopy = head;

	/*while (headcopy != NULL)*/

	for (count_the_nodes = 0; headcopy != NULL; count_the_nodes++)
	{
		if (count_the_nodes == index)
			return (headcopy);
		headcopy = headcopy->next;
		/*head = head->next;*/

		/*if (head->next == NULL)*/
		/*{*/
			/*return (NULL);*/
		/*}*/
	}

	/*return (head);*/
	return (0);
}
/*initialize and declare variables for a counter and pointer to a struct/node*/
/*check if head pointer/node is null if so return null*/
/*set node pointer to point to head pointer*/
/*starting from 0 increment until headcopy pointer/node is null*/
/*if the counter is equal to the index return the node it stops on*/
/*if not traverse the linked list until it does*/
/*if a node does not exist at that index return 0*/
