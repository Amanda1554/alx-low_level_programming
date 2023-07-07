#include "main.h"

/**
  * _memset - fills a memory with a constant byte
  * @s: memory area where a pointer is returned
  * @b: where memory is copied
  * @n: number of bytes
  * Return: pointer to memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;

        for (; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
}
