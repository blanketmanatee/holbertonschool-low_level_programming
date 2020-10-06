#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack:
 * @needle:
 * Return:
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	a = 0;

	while (haystack[a] != '\0')
	{
		if (haystack[a + b] == needle[b])
		{
			b++;
		}
		else if (haystack[a + b] != needle[b])
		{
			break;
		}
		else
			return ('\0');
	}
	if (needle[b] == '\0')
		return (haystack + a);
	a++;
}
return ('\0');
}
