#include <stdio.h>

/**
 * main - print base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
