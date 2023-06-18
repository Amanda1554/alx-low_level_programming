#include <stdio.h>
/**
  * main - lowercase alphabet excluding e and q
  *
  *Return: Always 0 (Success)
  **/
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
