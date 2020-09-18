#include <stdio.h>

/**
 * main - print numbers of base 10 starting with 0 followed by a new line
 * Return: 0
 */

int main(void)
{
	int number = '0';

	while (number <= '9')

	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
