#include "main.h"

/**
  * puts2 - prints every character of a string, s[0] included
  * @str: string to be printed
  */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
