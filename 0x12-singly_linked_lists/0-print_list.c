/**
 * print_list - prints all the elements of list_t list
 * @h: pointer to struct passed into function
(* a blank line
* Description: prints the len and str members of struct
* as well as the number of elements
(* section header: Section description)*
* Return: returns number of elements
*/
size_t print_list(const list_t *h)
{
	size_t  count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}
	return (count);
}
