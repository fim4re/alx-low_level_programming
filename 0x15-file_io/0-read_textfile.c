#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to POSIX std out.
 *
 * @filename: file to read
 * @letters: number of letters to read
 *
 * Return: 0 if it fails or the number of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd_check, wcnt;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rd_check = read(file, buffer, letters);
	if (rd_check == -1)
		return (0);

	wcnt = write(STDOUT_FILENO, buffer, rd_check);
	if (wcnt == -1 || rd_check != wcnt)
		return (0);

	free(buffer);

	close(file);

	return (wcnt);
}
