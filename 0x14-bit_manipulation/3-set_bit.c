#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @index: index starting from 0
  * @n: number to be used
  * Return: 1 if successful and -1 if unsuccessful
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
