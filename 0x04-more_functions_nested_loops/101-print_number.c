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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
