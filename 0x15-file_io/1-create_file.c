#include "main.h"
/**
 * create_file - creates a new file if it dosent exicte wirh textcontent
 * @filename: the file name
 * @text_content: the text content to put
 * Return: 0 if succes -1 if filas
 */
int create_file(const char *filename, char *text_content)
{
	int fd, byte;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		byte = write(fd, text_content, strlen(text_content));
		if (fd < 0 || byte < 0)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
