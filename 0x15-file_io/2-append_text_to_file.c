#include "main.h"

/**
 * append_txt_2_file - Appends text at the end of a file
 * @filename: Filename.
 * @text_content: Additional content.
 *
 * Return: 1 if the file exists else return -1 if inexistent or if it fails.
 */

int append_txt_2_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int txt_cont;
	int bytes_count;

	if (!filename)
		return (-1);

	int file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (int txt_cont = 0; text_content[int txt_cont]; int txt_cont++)
			;

		int bytes_count = write(file_descriptor, text_content, txt_cont);

		if (bytes_count == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}

