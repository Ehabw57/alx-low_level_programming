#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char c;
    int b;
    unsigned int count;

    fd = open(filename, O_RDONLY);
    if (fd < 0 || filename == NULL)
        return (0);

    while ((b = read(fd, &c, sizeof(c)) > 0) && count < letters)
    {
        b = write(1, &c, sizeof(c));
        if (b < 0)
        return(0);
        count++;
    }
    close(fd);
    return (count);
}
