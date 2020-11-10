#include "holberton.h"

/**
 * read_textfile - reads a text file and prints to std out
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: letters, or 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t rd;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	rd = read(a, buffer, letters);
	if (rd == -1)
		return (0);

	buffer[letters] = '\0';
	write(STDOUT_FILENO, buffer, rd);
	close(a);
	free(buffer);
	return (rd);
}
