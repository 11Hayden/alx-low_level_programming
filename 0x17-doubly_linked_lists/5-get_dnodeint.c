#include "lists.h"
/**
* get_dnodeint_at_index - get nth node
* @head: head
* @index: nth node to be accessed
* Return: the nth node of the list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *act = head;
	int nth = 0;

	while (nth++ != (int)index && act)
		act = act->next;

	if  (!act)
		return (NULL);
	return (act);
}
