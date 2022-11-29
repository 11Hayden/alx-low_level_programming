#include "lists.h"
/**
* pop_listint -  a function that deletes the head node of a listint_t
*linked list.
* @head: head pointer
* Return: returns head node data.
*/
int pop_listint(listint_t **head)
{
	int headpoint;
	listint_t *newh, *carry;
	
	if (*head == NULL)
		return (0);
	carry = *head;
	headpoint = carry->n;
	newh = carry->next;
	free(carry);
	*head = newh;
return (headpoint);
}
