
#include "main.h"
int cp(char *file_from, char *file_to)
{
	int fd1, fd2, r, w, c1, c2;
	char buf[1024];

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r = read(fd1, buf, 1024)) > 0)
	{
		if (fd1 < 0 || r < 0)
		{
			dprintf(2, "Error: Can't read from %s\n", file_from);
			exit(98);
		}
		w = write(fd2, buf, 1024);
		if (fd2 < 0 || w < 0)
		{
			dprintf(2, " Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	c1 = close(fd1);
	if (c1 < 0)
	{
		dprintf(2, "Error: Cant close %i\n", fd1);
		exit(100);
	}
	c2 = close(fd2);
	if (c2 < 0)
	{
		dprintf(2, "Error: Cant close %i\n", fd2);
		exit(100);
	}
}
int main(int ac, char **av)
{
	int n;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
