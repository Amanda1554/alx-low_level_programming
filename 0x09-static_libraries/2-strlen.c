#include "main.h"

/**
  * _strlen - calculates the lenght of a string
  * @s: is the pointer
  * Return: len of a string
  */

int _strlen(char *s)
{
        int len;

        len = 0;
        while (*s != '\0')
        {
                len++;
                s++;
        }
        return (len);
}
