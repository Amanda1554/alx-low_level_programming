#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything
  *@format: list of arguments
  * Return: anything, nil if NULL
  */

void print_all(const char * const format, ...)
{
	va_list arg;

	va_start(arg, format);

	int i = 0;
	char *any = 0;
	char *s;

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(arg, int));
					break;
				case 'f':
					printf("%f", va_arg(arg, double));
					break;
				case 'i':
					printf("%d", va_arg(arg, int));
					break;
				case 's':
					str = va_arg(arg, char *)
					printf("%s", str);
					break;
				default:
					break;
			}
			printf(", ";
			i++;
		}
		va_end(arg);
		printf("\n");
	}
