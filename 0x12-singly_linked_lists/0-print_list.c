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
		if (h == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", i, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
