#include "main.h"

/**
 * copy_file - Copies contents from one file to another.
 * @src_filename: Name of the file to copy from.
 * @dest_filename: Name of the file to copy to.
 *
 * Return: 0 on success, or a positive error code on failure.
 */
int copy_file(const char *src_filename, const char *dest_filename)
{
    int src_fd, dest_fd;
    ssize_t num_read, num_written;
    char buffer[1024];

    src_fd = open(src_filename, O_RDONLY);
    if (src_fd < 0) {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", src_filename);
        return 1;
    }

    dest_fd = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (dest_fd < 0) {
        dprintf(STDERR_FILENO, "Error: Cannot create file %s\n", dest_filename);
        close(src_fd);
        return 2;
    }

    while ((num_read = read(src_fd, buffer, sizeof(buffer))) > 0) {
        num_written = write(dest_fd, buffer, num_read);
        if (num_written < 0) {
            dprintf(STDERR_FILENO, "Error: Cannot write to file %s\n", dest_filename);
            close(src_fd);
            close(dest_fd);
            return 3;
        }
    }

    if (num_read < 0) {
        dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", src_filename);
        close(src_fd);
        close(dest_fd);
        return 4;
    }

    if (close(src_fd) < 0) {
        dprintf(STDERR_FILENO, "Error: Cannot close file %s\n", src_filename);
        return 5;
    }

    if (close(dest_fd) < 0) {
        dprintf(STDERR_FILENO, "Error: Cannot close file %s\n", dest_filename);
        return 6;
    }

    return 0;
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, or a positive error code on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s source_file destination_file\n", argv[0]);
        return 1;
    }

    return copy_file(argv[1], argv[2]);
}

