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
	/*new node with value of head node*/
	list_t *pheadcopy = head;

	/*while the copy of head doesn't point to null*/
	/*make the next node the current node*/
	while (pheadcopy->next != NULL)
		pheadcopy = pheadcopy->next;

	/*creat a pointer to a string use strdup*/
	/*copy the string passed in to the new string*/
	char *pstrcopy = strdup(str);

	/*creat a new node containing a copy of the string*/
	/*and a pointer to null*/
	list_t *pnew = create(pstrcopy, NULL);

	/*if the new node is null return null*/
	if (pnew == NULL)
	{
		return (NULL);
	}
	else
		/*else make the new node the end node*/
		pheadcopy->next = pnew;

	/*return the address of the new node*/
	return (&pheadcopy);

}
/*create new struct called headcopy and copy the struct head into it*/
/*while the second half of the node does not point to null*/
/*continue to copy the next nodes and attache them*/
/*headcopy -> next headcopy->next headcopy->next until ->null*/
/*create a struct called new*/
/*adds the string passed in and a pointer to null to the new node*/
/*when headcopy->next equals null attach the new node to the end*/
