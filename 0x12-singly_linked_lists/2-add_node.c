#include "lists.h"
/**
 * add_node - adds a node to a linked list
 * @head: double pointer to head of list
 * @str: constant string passed in to function
(* a blank line
* Description: function adds a new node to the
*beginning of a linked list
(* section header: Section description)*
* Return: returns new node
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *pnewnode;
	char *duplicatestring = strdup(str);
	int stringlength = 0;

	pnewnode = malloc(sizeof(list_t);

	if (pnewnode == NULL || str == NULL)
	return (NULL);

	while (str[stringlength] != '\0')
		stringlength++;

	pnewnode->len = stringlength;
	pnewnode->str = duplicatestring;
	pnewnode->next = *head;
	*head = pnewnode;
	return (pnewnode);
}
