#include "main.h"

/**
  * reverse_array - reverses the content of an array of intergers
  * @n: the number of elements of the array
  * @a: array to be reversed
  */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	i = temp = 0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
