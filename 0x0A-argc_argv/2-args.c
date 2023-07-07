#include <stdio.h>
#include "main.h"

/**
  * main - print the number of arguments pased into it
  * @argc: counts the number of arguments
  * @argv: array vectors
  * Return: 0
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
