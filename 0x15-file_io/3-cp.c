#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Cant't red from file %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program that copies the content of a file to another
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 1 on success 0 on failure
*/
int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	ssize_t r;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fd = open(av[1], O_RDONLY);

	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((r = read(from_fd, buffer, READ_BUF_SIZE)) > 0)
		if (write(to_fd, buffer, r) != r)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (r == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);

	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);

	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);

	return (EXIT_SUCCESS);

}
