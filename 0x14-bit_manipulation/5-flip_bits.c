#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to flip
  * @n: first int to be used
  * @m: second int to be used
  * Return: bits to be fliped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	unsigned long int flip = n ^ m;

	while (flip != 0)
	{
		flip = flip & (flip - 1);
		bits++;
	}
	return (bits);
}

