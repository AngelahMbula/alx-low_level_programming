#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - prints lowercase alphabet, 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	}
}
