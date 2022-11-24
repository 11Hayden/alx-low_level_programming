#include "lists.h"
/**
* free_list - a function that frees a list.
* @head: head of a list
*/
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
