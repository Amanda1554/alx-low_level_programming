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
					printf("%c", any, va_arg(s, int));
					break;
				case 'f':
					printf("%s%d", any, va_arg(s, double));
					break;
				case 'i':
					printf("%s%d", any, va_arg(s, int));
					break;
				case 's':
					str = va_arg(arg, char *);
					printf("%s%d", any, arg);
					break;
				default:
					i++;
					continue;
			}
			any = ".";
			i++;
		}
		va_end(arg);
		printf("\n");
	}
