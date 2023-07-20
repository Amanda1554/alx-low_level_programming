#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings
  * @separator: string to be printed
  * @n: number of strings
  * Return: string or nil if NULL
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int i;

	va_start(nm, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nm, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		if (separator == NULL)
			printf("(nil)");
	}
	va_end(nm);
	printf("\n");
}
