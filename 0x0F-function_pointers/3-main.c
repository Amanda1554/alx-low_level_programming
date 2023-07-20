#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - explains the function
  * @argc: counts number of arguments
  * @argv: array vector
  * Return: results of main, 98 is results are wrong, 99 if none of the above
  * 100 if user divided by 0
  */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 4)
		printf("Error\n"), exit(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);

	if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
		printf("Error\n"), exit(100);
	printf("%d\n", (get_op_func(argv[2])(num1, num2)));
	return (0);
}
