#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: filename
 * @text_content: content added
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int letters;
	int con_wr;

	if (!filename)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);

	if (file_des == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)

		con_wr = write(file_des, text_content, letters);

		if (con_wr == -1)
			return (-1);
	}

	close(file_des);

	return (1);
}
