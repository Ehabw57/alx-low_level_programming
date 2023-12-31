#include "main.h"
/**
 * read_textfile - print a spacifc amount of chars of the given file to stdout
 * @filename: the file to read from
 * @letters: the amount of letters to read
 * Return: the actual number of letters were printerd
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, b;
	char c;
	size_t count = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	for (; (b = read(fd, &c, sizeof(c))) > 0 && count < letters; count++)
		write(STDOUT_FILENO, &c, sizeof(c));
	close(fd);
	return (count);
}
