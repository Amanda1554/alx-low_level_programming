#include "main.h"

/**
  * get_endianness - checks the way a pc stores data types
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned int i = 1;
	char *bit = (char *) &i;

	return (*bit);
}
