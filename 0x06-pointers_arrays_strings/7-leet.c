#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer
 * Return: s
*/

char *leet(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		while (s[m] == 'a' || s[m] == 'A')
			s[m] = '4';
		while (s[m] == 'e' || s[m] == 'E')
			s[m] = '3';
		while (s[m] == 'o' || s[m] == 'O')
			s[m] = '0';
		while (s[m] == 't' || s[m] == 'T')
			s[m] = '7';
		while (s[m] == 'l' || s[m] == 'L')
			s[m] = '1';
	}
	return (s);
}
