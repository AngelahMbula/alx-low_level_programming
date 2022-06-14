#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
	int i, z;
	
	int len = 0;

	char *y = str;

	while (*y != '\0')
	{
		y++;
	}
	i = len - 1;
	for (z = 0; z <= i; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
