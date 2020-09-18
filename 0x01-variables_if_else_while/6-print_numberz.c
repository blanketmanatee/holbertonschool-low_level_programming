#include <stdio.h>

/**
 * main - print numbers of base 10 starting w 0
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
