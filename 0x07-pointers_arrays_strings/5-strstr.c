#include "main.h"

/**
  * _strstr - locates a substring
  * @needle: substring
  * @haystack: main string
  * Return: nothing
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *main = haystack;
		char *sub = needle;

		while (*main == *sub && *sub != '\0')
		{
			main++;
			sub++;
		}
		if (*sub == '\0')
			return (haystack);
	}
	return (0);
}
