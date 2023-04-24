#include "main.h"
/**
 * read_textfile - Read a text file and print the letters
 * @filename: Filename.
 * @letters: numbers of letters printed.
 *
 * Return: No. of letters printed. If it fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, bytes_read, bytes_written;
    char *buf;

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (!buf)
    {
        close(fd);
        return (0);
    }

    bytes_read = read(fd, buf, letters);
    if (bytes_read == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    bytes_written = write(STDOUT_FILENO, buf, bytes_read);

    free(buf);
    close(fd);

    return (bytes_written);
}

