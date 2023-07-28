#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all elements of a list
  * @h: pointer to the list
  * Return: the number of nodes, if NULL print [0] (nil)
  */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
