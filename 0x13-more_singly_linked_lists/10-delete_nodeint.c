#include "lists.h"
/**
* delete_nodeint_at_index - a function that deletes a new node
* at a given position.
* @head : head of node
* @index : index of list, where new node is removed.
* Return: 1 if successful or -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *next;

	prev = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}
	next = prev->next;
	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}
return (1);
}
