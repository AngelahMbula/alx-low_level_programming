#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int n = 1;

	unsigned int num = 0;

	do {
		if (*s == '-')
			n *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * n);
}
