#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: number to find the last place of
  *Return: the last digit of n
  */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
