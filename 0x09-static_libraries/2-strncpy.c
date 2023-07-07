#include "main.h"

/**
  * strncpy - concatenates two strings
  * @dest: first string
  * @src: second string
  * @n: number of bytes from src
  * Return: a pointer resulting to string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;
        int srclen = 0;

        while (src[i++])
        {
                srclen++;
        }
        for (i = 0; src[i] && i < n; i++)
        {
                dest[i] = src[i];
        }
        for (i = srclen; i < n; i++)
        {
                dest[i] = '\0';
        }
        return (dest);
}
