#include "holberton.h"

/**
 * argstostr - concatenates all args of the program
 * @ac: number of args
 * @av: ptr for each arg
 * Return: a ptr of all args concatenated
 */

char *argstostr(int ac, char **av)
{
	int i, x, y = 0, str = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			y++;
	}

	str = ac + y;
	arr = (char *) malloc((str + 1) * sizeof(char));
	if (arr == NULL)
		return (0);
	y = 0;
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++, y++)
		{
			arr[y] = av[i][x];
			arr[y + 1] = '\0';
		}
		arr[y++] = '\n';
	}
	return (arr);
}
