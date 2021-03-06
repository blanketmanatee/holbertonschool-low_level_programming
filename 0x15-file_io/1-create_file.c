#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int a, b;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (a == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	b = write(a, text_content, _strlen(text_content));
	if (b == -1)
		return (-1);

	close(a);
	return (1);
}

/**
 * _strlen - a function that finds the length of a string
 * @s: string
 * Return: len
 */

unsigned int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;
	return (len);
}
