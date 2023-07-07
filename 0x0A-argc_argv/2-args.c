#include <stdio.h>
#include "main.h"

/**
  * main - prints all the argument it receive
  * @argc: count the number of arguments
  * @argv: array vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
