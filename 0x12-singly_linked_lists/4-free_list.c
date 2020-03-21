#include "lists.h"
/**
 * free_list - frees up the memory ocupied by a node
 * @head: pointer to the head of a linked list
(* a blank line
* Description: frees a node in a linked list
(* section header: Section description)*
* Return: returns void
*/
void free_list(list_t *head)
{
	list_t *ptemporary;

	while (head != NULL)
	{
		ptemporary = head;
		head = head->next;
		free(ptemporary->str);
		free(ptemporary);
	}
}
/*create a pointer to a struct called ptemporary*/
/*start while loop*/
/*while the head pointer does not equal to null*/
/*store a copy of the head in ptemporary*/
/*move head to the null pointer*/
/*erase the string member of the ptemporary struct*/
/*erase the struct it's self or the second member*/
/*which is the pointer to the next struct in the linked list*/
