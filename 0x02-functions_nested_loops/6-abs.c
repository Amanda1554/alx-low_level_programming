#include "main.h"

/**
  * _abs - the absolute value of any number
  * @n: number to be converted
  * Return: absolute value of n
  */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
