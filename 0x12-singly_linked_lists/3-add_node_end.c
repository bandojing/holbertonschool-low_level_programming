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
	list_t *headcopy = head;

	while (headcopy->next != NULL)
		headcopy = headcopy->next;

	list_t *new = create(str, NULL);

	headcopy->next = new;

	return (headcopy);
}
/*create new struct called headcopy and copy the struct head into it*/
/*while the second half of the node does not point to null*/
/*continue to copy the next nodes and attache them*/
/*headcopy -> next headcopy->next headcopy->next until ->null*/
/*create a struct called new*/
/*adds the string passed in and a pointer to null to the new node*/
/*when headcopy->next equals null attach the new node to the end*/
