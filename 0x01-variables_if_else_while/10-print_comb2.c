#include <stdio.h>

/**
 * main - print 00 to 99
 *
 * Return: 0
 */

int main(void)
{

	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 9 && b == 9)
			{
				putchar ('\n');
			}
			else
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	return (0);
}
