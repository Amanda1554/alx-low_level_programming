#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to be printed
  */

void puts_half(char *str)
{
	int length, n;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\0');









}
