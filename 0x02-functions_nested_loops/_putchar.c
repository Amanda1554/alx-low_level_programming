#include <unistd.h>
/**
  *_putchar - writes the character c to standard output
  * @c: the character to print 
  * Return: Success 1
  * On error - is returned and errno is set apropriately.
  */
int _putchar(char c)
{
	return(write(1,&c,1));
}
