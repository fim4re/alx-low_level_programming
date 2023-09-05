#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bytes = read(f, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &but[0], bytes);
	close(f);
	return (bytes);
}
