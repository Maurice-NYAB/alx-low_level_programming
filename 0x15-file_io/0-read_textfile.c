#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t num_rd, num_wr;
	char *buf;

	if (!filename)
		return (0);

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	num_rd = read(file_des, buf, letters);
	num_wr = write(STDOUT_FILENO, buf, num_rd);

	close(file_des);

	free(buf);

	return (num_wr);
}
