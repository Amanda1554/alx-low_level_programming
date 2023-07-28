#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - adds a new node at the beginning of the list
  * @str: string to be used
  * @head: pointer to the string
  * Return: the address of the new element, NULL if unsuccessful
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;
	return (*head);
}
