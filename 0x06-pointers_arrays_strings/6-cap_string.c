#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @p: pointer to string
 * Return: s pointer
 */

char *cap_string(char *)
{
	char *s = p;
	char *spec = ",;;.!?\"(){}\t\n";
	int m;

	if (*s >= "97" && *s <= "122")
		*s = *s -32;
	while (*s)
	{
		for (m = 0; spec[m] != '\0'; m++)
		{
			if (*s == spec[m] && *(s + 1) >= "97" && *(s + 1) <= "122")
			{
				s++;
				*s = *s -32;
				break;
			}
		}
		s++;
	}
	return (s);
}
