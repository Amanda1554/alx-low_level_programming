#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: pointer to the string
  * @n: string to be used
  * Return: address of the new element, NULL if unsuccessful
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
