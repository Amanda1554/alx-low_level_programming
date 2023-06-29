#include "main.h"
#include <stdio.h>

/**
  * _strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int j;

	while (dest[destlen])
	{
		destlen++;
	}
	for (j = 0; src[j] != 0; j++)
	{
		dest[destlen] = src[j];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
