#include "lists.h"
/**
* delete_dnodeint_at_index - delets node at an index
* @head: head of list
* @index: index of node to be deleted
* Return: 1 if removed, -1 if not removed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *act = *head;
	unsigned int cont;

	if (!head || !act)
		return (-1);

	if (index == 0)
	{
		act = act->next;
		free(*head);
		*head = act;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (cont = 0; act; cont++)
	{
		if (cont == index)
		{
			if (act->next)
			{
				(act->prev)->next = act->next;
				(act->next)->prev = act->prev;
				free(act);
				return (1);
			}
			else
			{
				(act->prev)->next = NULL;
				free(act);
				return (1);
			}
		}
		act = act->next;
	}
	return (-1);
}
