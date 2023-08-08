#include "main.h"
#include <unistd.h>

/**
  * create_file - creates a file
  * @filename: name of the file to be created
  * @text_content: string to write the file
  * Return: 1 on success, -1 if unsuccessful or NULL
  */

int create_file(const char *filename, char *text_content)
{
	int byte_count = 0;
	int folder;
	int written;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (byte_count = 0; text_content[byte_count];)
			byte_count++;
	}

	folder = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(folder, text_content, byte_count);

	if (folder == -1 || written == -1)
		return (-1);
	close(folder);
	return (1);
}
