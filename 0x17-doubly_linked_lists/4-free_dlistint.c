#include "lists.h"
/**
* free_dlistint - free a doubly linked list
* @head: doubly linkedlist
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *act = head;

	while (head)
	{
		act = head;
		head = act->next;
		free(act);
	}
}
