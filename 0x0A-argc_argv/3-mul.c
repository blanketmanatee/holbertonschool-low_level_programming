#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
}
