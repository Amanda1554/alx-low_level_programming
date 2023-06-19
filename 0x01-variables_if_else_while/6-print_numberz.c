#include<stdio.h>
/**
  * main - single digit from 0 to 10 using putchar
  *
  *Return: Always 0 (Success)
  **/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
