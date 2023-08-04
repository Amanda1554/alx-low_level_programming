#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @index: index starting from 0
  * @n: number to be used
  * Return: the value of a bit at index or -1 if unsuccessful
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
	{
		return (-1);
	}

	bits = (n >> index) & 1;
	return (bits);
}
