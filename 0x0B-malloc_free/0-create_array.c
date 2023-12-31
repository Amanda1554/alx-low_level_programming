#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes it with c
  * @size: array size
  * @c: char to initialize with
  * Return: ptr, NULL if unsuccessful
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
