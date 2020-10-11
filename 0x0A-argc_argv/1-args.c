#include <stdio.h>

int main(int argc, char *argv[])
{
	int count;

	argv = argv;

	if (argc >= 0)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%d\n", count - 1);
		}
	}
	return (0);
}
