#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed btwn numbers
 * @n: number of ints passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list pnum;
	unsigned int i, args = 0;

		va_start(pnum, n);
		for (i = 0; i < n; i++)
		{

			args = va_arg(pnum, int);

			printf("%d", args);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
			}
		va_end(pnum);
		printf("\n");
}
