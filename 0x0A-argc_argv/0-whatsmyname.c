#include <stdio.h>
#include "main.h"

/**
  * main - print the program name
  * @argc: count number of arguments
  * @argv: array vector
  * Return: 0
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
