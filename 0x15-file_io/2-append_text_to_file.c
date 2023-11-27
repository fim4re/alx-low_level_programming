#include "main.h"

/**
 * append_text_to_file - funcion that appends text at the end of file
 *
 * @filename: name of the file
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, app_st, word = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[word] != '\0')
			word++;

		app_st = write(file, text_content, word);
		if (app_st == -1)
			return (-1);
	}
	close(file);
	return (1);
}
