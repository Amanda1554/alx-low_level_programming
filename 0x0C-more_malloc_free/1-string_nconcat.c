#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: bytes to be allocated
  * Return: concatenated string or NULL if unsuccessful
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		ptr = malloc(sizeof(char) * (length1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];

	for (; s2[i - length1] && i < (length1 + n); i++)
		ptr[i] = s2[i - length1];
	ptr[i] = '\0';
	return (ptr);
}
