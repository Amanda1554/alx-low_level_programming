#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char word;
	int number;
	long int intl;
	long long int intll;
	float decimal;

	printf("Size of a char: %zu byte(s)\n", sizeof(word));
	printf("Size of an int: %zu byte(s)\n", sizeof(number));
	printf("Size of a long int: %zu byte(s)\n", sizeof(intl));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(intll));
	printf("Size of a float: %zu byte(s)\n", sizeof(decimal));

	return (0);
}
