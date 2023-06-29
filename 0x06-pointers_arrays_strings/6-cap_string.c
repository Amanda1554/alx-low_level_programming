#include "main.h"

/**
  * cap_string - capitilizes words of a string
  * @s: pointer to a string
  * Return: capitilized string
  */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= ('a' - 'A');
	return (s);
}
