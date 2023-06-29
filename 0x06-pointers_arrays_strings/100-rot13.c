#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @s: pointer to a string
  * Return: returns s
  */

char *rot13(chsr *s)
{
	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", s);
	return (0);
}
