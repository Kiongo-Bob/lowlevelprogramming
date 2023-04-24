#include "main.h"

/**
 * create_file - To create a file
 * @filename: Filename.
 * @text_content: Content to be written on the file.
 *
 * Return: 1 if it is successful else returns -1.
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int n, r;

    if (!filename)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (fd == -1)
        return (-1);

    if (!text_content)
        text_content = "";

    n = strlen(text_content);

    r = write(fd, text_content, n);

    if (r == -1)
    {
        close(fd);
        return (-1);
    }

    close(fd);

    return (1);
}

