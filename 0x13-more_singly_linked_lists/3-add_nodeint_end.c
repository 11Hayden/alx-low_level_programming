#include "lists.h"
/**
* add_nodeint_end - a function that adds a new node at the end of a list.
* @head : head of lists.
* @n : number of node
* Return: returns address of new node. NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	temp = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}
