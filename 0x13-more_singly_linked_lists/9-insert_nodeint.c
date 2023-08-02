#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to the list
  * @n: data
  * @idx: index where new node should be added
  * Return: the address of the new node or NULL if unsuccessful
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp = *head;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
