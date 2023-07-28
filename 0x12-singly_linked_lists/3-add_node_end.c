#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - adds a new node at the end of a list
  * @str: string to be used
  * @head: pointer to the string
  * Return: address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;
	list_t *temp = *head;

	while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = len;
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
