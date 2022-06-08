#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * jack_bauer - prints every minute of day
 * Return: void
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (int a = 0; a < 24; a++)
	{
	for (int b = 0; b <= 59; b++)
	{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar(':');
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
		_putchar('\n');
	}
	}
}
