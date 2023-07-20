#include "3-calc.h"

/**
  * op_add - returns sum of two integers
  * @a: first integer
  * @b: second integer
  * Return: sum of a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference between two integers
  * @a: first integer
  * @b: second integer
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product of two integers
  * @a: first integer
  * @b: second integer
  * Return: product of axb
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the result of division of two integers
  * @a: first integer
  * @b: second integer
  * Return: results of a/b, error if divided by 0
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - return the remainder of the division
  * @a: first interger
  * @b: divisor
  * Return: the remainder
  */
int op_mod(int a, int b)
{
	return (a % b);
}
