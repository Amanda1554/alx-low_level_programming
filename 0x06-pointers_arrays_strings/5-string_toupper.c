#include "main.h"

/**
  * string_toupper - changes all lowercase letter to uppercase
  * @c: pointer to the string
  * Return: the converted string
  */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 'a' - 'A';
		i++;
	}
	return (c);
}
