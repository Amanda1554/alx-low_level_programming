#include "main.h"
#include <stdlib.h>

/**
  * array_range  - creates an array of integers
  * @min: minimum range
  * @max: maximum range
  * Return: pointer to newly created array
  */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min++;
	return (ptr);
}
