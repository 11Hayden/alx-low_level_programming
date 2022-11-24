#include "lists.h"
/**
* print_list - a function that prints all the elements of a list_t list.
* @h:parameter of linked list
* Return: returns number of elements in list list_t
*/

size_t print_list(const list_t *h)
{
	size_t numel = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numel++;
	}
	return (numel);
}
