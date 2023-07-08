#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * main - adds positive numbers
  * @argc: counts the number of arguments
  * @argv: array vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
        int i;
	unsigned int j, sum = 0;
        char *s;

        if (argc > 1)
        {
		for (i = 1; i < argc; i++)
		{
			if (argv > 1)
			{
				for (j = 0; j < strlen(s); j++)
				{
					s = argv[j];
				}
				sum += atoi(s);
				s++;
			}
		printf("%d\n", sum);
	}
	return (0);
}
