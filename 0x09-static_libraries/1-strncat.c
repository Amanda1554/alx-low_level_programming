#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: first string
  * @src: second string
  * @n: Number of bytes
  * Return: a pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
        int i = 0;
        int destlen = 0;

        while (dest[i++])
        {
                destlen++;
        }
        for (i = 0; src[i] && i < n; i++)
        {
                dest[destlen++] = src[i];
        }
        return (dest);
}
