#include "main.h"
#include <unistd.h>

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: string to add at the end of the file
  * Return: 1 on success, -1 if NULL or unsucessful
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int byte_count;
	int opened;
	int written;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (byte_count = 0; text_content[byte_count];)
			byte_count++;
	}

	opened = open(filename, O_WRONLY | O_APPEND);
	written = write(opened, text_content, byte_count);
	if (opened == -1)
		return (-1);
	if (written == -1)
		return (-1);

	close(opened);
	return (1);
}
