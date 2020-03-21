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
	char *duplistring = strdup(str);
	int stringlength = 0;

	pnewnode = malloc(sizeof(list_t));

	if (pnewnode == NULL || str == NULL)
	return (NULL);

	while (str[stringlength] != '\0')
		++stringlength;

	pnewnode->str = duplistring;
	pnewnode->len = stringlength;
	pnewnode->next = *head;
	*head = pnewnode;

	return (pnewnode);

}
/*create variables*/
/*malloc a new struct*/
/*if the new struct/node is null or if str is null return null*/
/*while string is there increment the stringlength*/
/*the len member = the string length*/
/*the string member equals the string passed in*/
/*the next pointer points to the head*/
/*the newnode now becomes the head*/
/*the main function calls the print_list function made earlier*/
/*print_list function is number 0*/
