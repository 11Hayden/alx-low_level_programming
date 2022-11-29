#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list.
* @head: head of node.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, carry;

	if (head != NULL)
	{
		carry = *head;
		while ((temp = carry) != NULL)
		{
			carry = carry->next;
			free(temp);
		}
		*head = NULL;
	}
}
