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

	listint_t *node_to_add;

	node_to_add = malloc(sizeof(listint_t));
		if (node_to_add == NULL);
			return (NULL);

	listint_t swap = *head;

	node_to_add->n = n;
	node_to_add->next = NULL;

	if (*head == NULL)
		*head = node_to_add;

	while (swap->next != NULL)
		swap = swap->next;

	swap->next = node_to_add;

	return (node_to_add);



}
