#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to the string
  * Return: the converted number or 0 if b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		converted = 2 * converted + (b[i] - '0');
	}
	return (converted);
}
