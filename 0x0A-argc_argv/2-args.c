#include <stdio.h>

/**
 * main - prints all args it receives
 * @argc: count
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
