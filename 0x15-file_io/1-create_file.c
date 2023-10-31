#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int file_des;
	int letters;
	int con_wr;

	if (!filename)
		return (-1);

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_des == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)

	con_wr = write(file_des, text_content, letters);

	if (con_wr == -1)
		return (-1);

	close(file_des);

	return (1);
}
