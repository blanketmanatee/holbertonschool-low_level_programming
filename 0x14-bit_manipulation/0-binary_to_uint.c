#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointing to string of 0 and 1 chars
 * Return: converted number or 0 if one or more chars are not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1;
	unsigned int j = 0;
	int c;
	unsigned int len;

	len = strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			j+= i;
		}
		i*= 2;
	}
	return (j);
}
