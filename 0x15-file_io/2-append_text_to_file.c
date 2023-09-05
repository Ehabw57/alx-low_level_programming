#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
    /**
     * check if filename is not null
     * int fd;
     * fd = open(filename,o_append|Rw)
     * check if fd is not -1
     * if (text_cont != NULL)
     * {
     * wr = write(fd,text_content, stlenr(text_content))
     * check wr if
     * }
     * return (1)
     *
     */
    int fd, wr;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_APPEND | O_WRONLY);
    if (fd < 0)
        return (-1);

    if (text_content != NULL)
    {
        wr = write(fd, text_content, strlen(text_content));
        if (wr < 0)
        {
            close(fd);
            return (-1);
        }
    }
    close(fd);
    return (1);
}