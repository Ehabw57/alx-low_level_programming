#include "main.h"
/**
 * read_textfile - print a spacifc amount of chars of the given file to stdout
 * @filename: the file to read from
 * @letters: the amount of letters to read
 * Return: the actual number of letters were printerd
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	unsigned int count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || fd < 1)
		return (0);

	count = read(fd, buf, letters);
	write(1, buf, count);
	free(buf);

	return (count);
}
