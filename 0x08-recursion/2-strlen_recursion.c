#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: string to be used
  * Return: the length of s
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
