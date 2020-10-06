#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints largers prime factor of a num
 *
 * Return: 0
 */

int main(void)
{
	long int a, b, c;

	b = 612852475143;
	for (a = 1; a <= b; a++)
	{
		if (b % a == 0)
		{
			if (b == a)
			{
				printf("%ld\n", a);
				break;
			}
			c = b / a;
			b = c;
			a = 1;
		}
	}
	return (0);
}
