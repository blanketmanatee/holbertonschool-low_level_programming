#include <stdio.h>

/**
 * main - list all combination of numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 0)
				b = b + a + 1;
			putchar (a + '0');
			putchar (b + '0');
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
