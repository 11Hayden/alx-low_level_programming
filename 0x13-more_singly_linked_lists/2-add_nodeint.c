#include "lists.h"
/**
* add_nodeint - a function that adds a new node at the beginning of a list.
* @head : head of lists.
* @n : number of node
* Return: returns address of new node. NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
