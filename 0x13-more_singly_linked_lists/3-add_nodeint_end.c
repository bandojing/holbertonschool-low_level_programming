#include "lists.h"
/**
  * add_nodeint_end - adds node to end of the list
  * @head: double pointer to head of linked list passed in
  * @n: const int passed into function
  * Description: uses while loop to increment var that holds
  * number of elements in a linked list
  * Return: number of elements in the linked list
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *swap;
	listint_t *node_to_add;
	int newn = n;

	node_to_add = malloc(sizeof(listint_t));
			if (node_to_add == NULL)
			return (NULL);
	
	swap = *head;

		node_to_add->n = newn;
		node_to_add->next = NULL;
		swap = *head;


	while (swap->next != NULL)
		swap = swap->next;

	swap->next = node_to_add;

		return (node_to_add);

}
