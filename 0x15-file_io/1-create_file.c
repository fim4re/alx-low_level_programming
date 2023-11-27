#include "main.h"

/**
 * create_file - function that creates file
 *
 * @filename: name of file
 * @text_content: string to write into the file
 *
 * Return: 1 on success OR -1 on faliure
*/

int create_file(const char *filename, char *text_content)
{
	int file, write_st, word = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[word] != '\0')
			word++;

		write_st = write(file, text_content, word);
		if (write_st == -1)
			return (-1);
	}
	close(file);
	return (1);
}
