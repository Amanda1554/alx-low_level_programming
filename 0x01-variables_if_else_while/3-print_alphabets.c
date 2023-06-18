#include <stdio.h>
/**
  * main - Alphabet in both capital and small letters
  *
  * Return: Always 0 (Success)
  **/
int main(void)
{
	int n = 97;
	int x = 65;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
