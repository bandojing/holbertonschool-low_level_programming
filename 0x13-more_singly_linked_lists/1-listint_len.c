#include "lists.h"
/**
 * listint_len - returns number of elements in linked list
 * @h: pointer to head of linked list passed in
 *
 * Description: uses while loop to increment var that holds
 * number of elements in a linked list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}
/*create size_t variable initialize it to 0*/
/*while loop checking if h->next is not equal to null*/
/*increment variable to count number of elements in the list*/
/*when h->next is equal to null*/
/*return number of elements*/
