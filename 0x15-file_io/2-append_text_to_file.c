#include "main.h"
/**
 * append_text_to_file - a function that append new text contet to the file
 * @filename: the name of the file
 * @text_content: the content to add to the new file
 * Return: 1 on success -1 on fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (fd < 0 || wr < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
