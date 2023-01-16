#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: h of list
* @idx: index to insert new node
* @n: value of new node
* Return: address of new_node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *act = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int cont;

	if (!h || !new_node)
		return (NULL);

	new_node->n = n;

	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (cont = 0; act; cont++)
	{
		if (cont == idx)
		{
			new_node->prev = act->prev;
			(act->prev)->next = new_node;
			act->prev = new_node;
			new_node->next = act;
			return (new_node);
		}
		else if (!act->next && 1 + cont == idx)
			return (add_dnodeint_end(h, n));
		act = act->next;
	}
	return (NULL);
}
