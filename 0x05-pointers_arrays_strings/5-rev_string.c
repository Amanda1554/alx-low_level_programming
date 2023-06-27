#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	char reverse = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		reverse = s[j];
		s[j] = s[i];
		s[i] = reverse;
	}
}
