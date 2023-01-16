#include "lists.h"
/**
* sum_dlistint - sum of doubly linked list
* @head: head
* Return: return the sum of list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
