
#include "main.h"
/**
 * cp - copys content of file_from to file_to
 * @file_from: the file to copy contntens from
 * @file_to: the file to paste contents to
 */
void cp(char *file_from, char *file_to)
{
	int fd1, fd2, r = 1, w;
	char buf[1024];

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((r = read(fd1, buf, 1024)) != 0)
	{
		if (r < 0 || fd1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		w = write(fd2, buf, r);
		if (w < 0 || fd2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}

	if (close(fd1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1), exit(100);
	if (close(fd2))
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2), exit(100);
}
/**
 * main - test the function
 * @ac: the number of args passed
 * @av: the args passed
 * Return: Always 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
