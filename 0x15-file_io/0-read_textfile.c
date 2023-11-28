#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *		   to POSIX standard output
 * @filename: is the file to read
 * @letters: number of letters to read and print
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileN;
	ssize_t readCheck, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileN = open(filename, O_RDONLY);

	if (fileN == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	readCheck = read(fileN, buffer, letters);
	if (readCheck == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, readCheck);
	if (wcount == -1 || readCheck != wcount)
		return (0);

	free(buffer);

	close(fileN);

	return (wcount);
}
