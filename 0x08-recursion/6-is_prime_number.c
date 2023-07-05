#include "main.h"

/**
  * _prime - checks if n is prime or not
  * @n: input number
  * @x: to be compared with n
  * Return: 1 if n is prime and 0 if not
  */

int _prime(int n, int x)
{
	if (x % n == 0 || x < 2)
		return (0);
	else if (n == x - 1)
		return (1);
	else
		return (_prime(n + 1, x));
	return (1);
}
/**
  * is_prime_number - checks for prime numbers
  * @n: number to be checked
  * Return: 1 if n is prime and 0 if not
  */

int is_prime_number(int n)
{
	return (_prime(2, n));
}
