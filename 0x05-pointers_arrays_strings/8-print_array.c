#include <stdio.h>
#include "main.h"

/**
  * print_array - prints array of integers
  * @n: number of array elements to be printed
  * @a: array elements
  */

void print_array(int *a, int n)
{
	int p;

	p = 0;
	while (p < n)
	{
		if (p != n - 1)
			printf("%d, ", a[p]);
		else
		{
			printf("%d, ", a[n - 1]);
		}
			p++;
	}
	printf("\n");
}
