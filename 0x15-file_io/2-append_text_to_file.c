#include "main.h"

/**
 * append_text_to_file - funcion that appends text at the end
 *                      of a file
 *
 * @filename: the file to add data to
 * @text_content: text content to add to file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, appStatus, words = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		appStatus = write(file, text_content, words);
		if (appStatus == -1)
			return (-1);
	}

	close(file);
	return (1);
}
