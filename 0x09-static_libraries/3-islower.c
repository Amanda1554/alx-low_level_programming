#include "main.h"

/**
  * _islower - checks for lowercase characters
  * @c: character used to test
  * Return: 1 if its a lowercase character or 0 if its not
  */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}
