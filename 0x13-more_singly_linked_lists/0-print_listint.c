#include "lists.h"
/**
  * print_listint - prints the n element of linked list
  * then returns the number of nodes in that list
  * @h: pointer to the head of the list
 (* a blank line
 * Description: uses while loop to go through linked list
 * until h->next is equal to null, iterates a size_t
 * variable to count the number of nodes and returns it
 (* section header: Section description)*
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t  numberofnodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		numberofnodes++;
	}
	return (numberofnodes);
}
/*create a size_t variable because the function is of size_t*/
/*while loop will run while h->next is not equal to null*/
/*print the n element of the struct in the list*/
/*increment a counter to count the number of nodes in the list*/
/*when h-> is null, when we are at the end of the linked list*/
/*return the number of nodes we went through*/
