#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - returns nth node of a list
  * @index: index of the node
  *@head: pointer to the list
  * Return: the nth node or NULL if node doesnt exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
