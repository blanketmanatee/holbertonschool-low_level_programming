#include "3-calc.h"

/**
 * main - main function
 * @argc: count
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*idk)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	idk = get_op_func(argv[2]);
	if (idk == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	b = atoi(argv[3]);
	a = atoi(argv[1]);
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", idk(a, b));
	return (0);
}
