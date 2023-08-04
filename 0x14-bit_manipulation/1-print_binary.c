#include "main.h"
#include <stddef.h>

/**
  * print_binary - prints binary representation of a number
  * @n: binary number to be printed
  * Return: nothing
  */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int bits = 0;
	int i;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			bits++;
		}
		else if (bits)
		{
			_putchar('0');
		}
	}
		if (bits == 0)
		{
			_putchar('0');
		}
}
