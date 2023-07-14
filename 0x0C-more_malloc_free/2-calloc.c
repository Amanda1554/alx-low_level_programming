#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory of a array
  * @nmemb: elements of array
  * @size: number of byte to be allocated
  * Return: ptr or NULL
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		((char*)ptr)[i] = 0;
	return (ptr);
}
