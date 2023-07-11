#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns a copy of the string as a parameter
  * @str: char to be used
  * Return: 0 if successful
  */

char *_strdup(char *str)
{
	char *alx;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	alx = malloc(sizeof(char) * (i + 1));

	if (alx == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		alx[j] = str[j];
	return (alx);
}
