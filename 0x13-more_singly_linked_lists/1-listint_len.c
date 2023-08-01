#include "lists.h"
#include <stdio.h>

/**
  * listint_len - returns the number of elements in a linked list
  * @h: pointer to list
  * Return: number of lements
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
