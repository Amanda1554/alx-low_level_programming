#include "main.h"

/**
  * natural_sqrt - checks for the natural square root
  * @n: input number to compare
  * @x: base to compare n with
  * Return: natural square root of x
  */

int natural_sqrt(int n, int x)
{
	if (n * n == x)
		return (n);
	else if (n * n > x)
		return (-1);
	else
		return (natural_sqrt(n + 1, x));
}
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number to find the square root of
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	return (natural_sqrt(1, n));
}
