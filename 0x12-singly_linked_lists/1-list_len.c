#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to struct
(* a blank line
* Description: returns the number of elements in a linked list
(* section header: Section description)*
* Return: returns the number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
	size_t  membercount = 0;
	list_t *headcount = head;

	while (headcount != NULL)
	{
		membercount++;
		headcount = headcount->next;
	}
	return (membercount);
}
/*first int to count the elements in the list is made*/
/*a pointer to a struct is made it copies the head of the list*/
/*while the linked list exists*/
/*increment the counter*/
/*the pointer goes to the next element in teh list*/
/*return the counter which is the number of elements in the linked list*/
