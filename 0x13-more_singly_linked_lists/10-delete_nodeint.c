#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index - deletes the node at index index of a list
  * @head: pointer of the list
  * Return: 1 if successful or -1 if unsuccesssful
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;

	if (*head == NULL)
	{
		 return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
		return (0);
}
