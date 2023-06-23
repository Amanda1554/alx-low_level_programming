#include "main.h"

/**
  * print_line - draws a straight line
  * @n: character to be printed
  * return: n
  */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
