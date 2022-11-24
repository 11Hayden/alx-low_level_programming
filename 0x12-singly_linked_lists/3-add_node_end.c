#include "lists.h"
/**
* add_node_end - a function that adds a new node at the end of list_t
* @head: pointer to eniter list
* @str: string
* Return: returns address of head
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t achar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (achar = 0; str[achar]; achar++)
		;
	new->len = achar;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
return (*head);
}
