#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: a double pointer to the head of a list
 * @str: a pointer to a string passed into the function
(* a blank line
* Description: adds a node to the end of a linked list
(* section header: Section description)*
* Return: returns the head of the new linked list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pnewnode;
	list_t *pendingnode;

	int stringlength = 0;

	char *duplistring = strdup(str);

	if (str == NULL)
		return (NULL);

	pendingnode = malloc(sizeof(list_t));

	if (pendingnode == NULL)
		return (NULL);

	while (str[stringlength] != '\0')
		stringlength++;

	pendingnode->str = duplistring;
	pendingnode->len = stringlength;
	pendingnode->next = NULL;
	/*got seg fault for not including this line below*/
	pnewnode = *head;

	if (*head == NULL)
	{
		*head = pendingnode;
		return (pendingnode);
	}

	while (pnewnode->next != NULL)
		pnewnode = pnewnode->next;
		pnewnode->next = pendingnode;

		return (pendingnode);
}
/*remember that the node that will be the new end will need to be filled*/
/*setup two structs one new one and one to attach to the end*/
/*int for the stringlength = 0;*/
/*duplicate the str passed in*/
/*create space for a new node with malloc*/
/*if the newnode is null or the str is null return null*/
/*while the string passed in is not a the null byte*/
/*copy the string to the str member of the struct*/
/*copy the length to the len member of the struct*/
/*make the new node point to null since its going to be the last one*/
/*if the head node is not there or pointing to null*/
/*the new node becomes the head (newnode->next---->oldnode->null)*/
/*while the endingnod does not point to null*/
/*traverse the list until the last node*/
/*once it is null make the last node point to the new node*/
/*so the new node we made is the last one*/
