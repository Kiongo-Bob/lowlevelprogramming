#include "main.h"

/**
 * create_file - To create a file
 * @filename: Filename.
 * @text_content: Content to be written on the file.
 *
 * Return: 1 if it is successfull else returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int txt_cont;
	int bytes_count;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (txt_cont = 0; text_content[txt_cont]; txt_cont++)
		;

	bytes_count = write(file_descriptor, text_content, txt_cont);

	if (bytes_count == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

