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
    if (!filename)
        return -1;

    FILE *f = fopen(filename, "w");

    if (!f)
        return -1;

    if (text_content)
    {
        size_t n = fwrite(text_content, 1, strlen(text_content), f);

        if (n != strlen(text_content))
        {
            fclose(f);
            return -1;
        }
    }

    fclose(f);

    return 1;
}

