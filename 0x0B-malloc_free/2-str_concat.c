#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: 0 or NULL if unsuccessful
  */

char *str_concat(char *s1, char *s2)
{
	char *sum;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	sum = malloc(sizeof(char) * (i + j + 1));
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	sum = malloc(sizeof(char) * (i + j + 1));

	if (sum == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		sum[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		sum[i] = s2[j];
		i++, j++;
	}
	sum[i] = '\0';
	return (sum);
}
