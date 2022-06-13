#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
	int i, len;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
