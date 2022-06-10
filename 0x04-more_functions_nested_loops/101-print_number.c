#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_number - prints integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
		_putchar('0');
	if (num / 10)
		printnumber(num / 10);

	_putchar((num % 10) + '0');
}
