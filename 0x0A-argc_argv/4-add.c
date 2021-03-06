#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: count
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 00; j++)
		{
			if (!isdigit(argv[i][j]) || !isdigit(argv[i][j]))
			{
				printf("Error\n");
				return  (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return  (0);
}
