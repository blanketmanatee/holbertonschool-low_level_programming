#include "holberton.h"

/**
 * append_text_to_file - appends text
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;

	if (filename == NULL)
		return (-1);

	a = open(filename,  O_WRONLY | O_APPEND);
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
