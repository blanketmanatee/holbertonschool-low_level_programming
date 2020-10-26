#include "variadic_functions.h"

/**
 * print_strings - prints string followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list str;
	char *ptr;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char*);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
