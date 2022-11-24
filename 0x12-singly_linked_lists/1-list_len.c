#include "lists.h"
/**
* list_len - a function that returns the number of elements in a linked list_t.
* @h:parameter of linked list
* Return: returns number of elements in list list_t
*/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
