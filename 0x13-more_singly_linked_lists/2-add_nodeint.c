#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the beginning of a list
  * @head: pointer to list
  * @n: string to be used
  * Return: the address of the new element or NULL if unsuccessful
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = (*head);
	(*head) = newnode;
	return (*head);
}