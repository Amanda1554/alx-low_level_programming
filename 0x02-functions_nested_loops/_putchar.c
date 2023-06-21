#include <unistd.h>
/**
  *_putchar - writes char into standard output
  * Return: Sucess 1
  * when an error returns -1 will be returned
  **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
