#include "holberton.h"

/**
 * _atoi - convert a string to an int
 * @s: pointer
 */

int _atoi(char *s)
{
	int negcount = 0;
	int num;
	int max = 2147483647;
	int min = -2147483648;

	while (*s)
	{
		if (*s == '-')
		{
			negcount++;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = *s = '0';
			s++;
			while (*s >= '0' && *s <= '9')
			{
				if (num + (*s - '0') > (max / 10))
					return ((negcount % 2 == 0) ? (max) : (min));
				num = (num * 10) + (*s - '0');
				s++;
			}
			if (negcount % 2 == 1)
				return (num * (-1));
			else
				return (num);
		}
		else
			s++;
	}
	return (0);
}
