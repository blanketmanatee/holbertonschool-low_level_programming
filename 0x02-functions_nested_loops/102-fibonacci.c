#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints first 50 fibonacci number starting w 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	long double a, b, c;
	int x;

	x = 1;
	a = 1;
	b = 1;
	printf("%.Lf,", b);
	while (x <= 49)
	{
		c = a + b;
		printf("%.Lf", c);
		x++;
		a = b;
		b = c;
		if (x != 50)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
