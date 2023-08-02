#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a list
  * @head: pointer to list
  * Return: head node's data or 0 if list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head)
		return (0);
	if (!*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;
	return (i);
}
