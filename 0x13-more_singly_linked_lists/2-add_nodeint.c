#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to head of linked list passed in
 * @n: n member to add to node
 *
 * Description: declares a new node, creates memory space
 * for a new node, adds new node to the beginning of a
 * linked list and returns that node
 * Return: returns new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_to_add;

	node_to_add = malloc(sizeof(listint_t));
	if (node_to_add == NULL)
		return (NULL);

	/*while (*head != NULL)*/
	/*{*/
		node_to_add->n = n;
		node_to_add->next = *head;
		*head = node_to_add;
	/*}*/

	return (node_to_add);

}
/*create a new node*/
/*if the node is null return null*/
/*while node is not equal to null*/
/*make the node->next point to head*/
/*make the head pointer point to the new node*/
/*return the new node*/
