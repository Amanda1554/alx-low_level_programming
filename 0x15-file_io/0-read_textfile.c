#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
  * read_textfile - reads a text file and prints it to the POSIT stdout
  * @letters: number of letters it should read and print
  * @filename: file to be used
  * Return: number of letters it could read and print, 0 if unsuccessful
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t folder;
	ssize_t read_byte;
	char *buffer;

	ssize_t written;

	folder = open(filename, O_RDONLY);
	if (folder == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	read_byte = read(folder, buffer, letters);

	written = write(STDOUT_FILENO, buffer, read_byte);
	free(buffer);
	close(folder);
	return (written);
}
