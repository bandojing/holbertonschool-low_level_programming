#include "lists.h"
/**
  * sum_listint - returns the sum of n members of nodes
  * @head: beginning ot linked list
  *
  * Description: this function returns the sum of all int n
  * members of the linked list.
  * section header: Section description)*
  * Return: returns the sum of members of nodes in linked list
  */

int sum_listint(listint_t *head)
{
	int sum_of_members = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum_of_members = sum_of_members + head->n;
		head = head->next;
	}

	return (sum_of_members);
}
/*int to count number of members*/
/*check if head pointer is null*/
/*while the head pointer is not null*/
/*add up the sum*/
/*traverse the linked list*/
/*return the sum*/
