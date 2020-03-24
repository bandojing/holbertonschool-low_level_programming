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

	if (head == NULL)
		return (NULL);

	for (count_the_nodes = 0; count_the_nodes </*=*/ index; count_the_nodes++)
	{
		head = head->next;

		if (head->next == NULL)
		{
			return (NULL);
		}
	}

	return (head);
}
/* create int to count nodes during the for loop */
/* for loop that stops on the nth element by stopping at the index*/
/* if head->next is equal to null return Null*/
/*return the node that the loop stops on*/
