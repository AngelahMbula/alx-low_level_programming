#include "main.h"
#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet_x10(void);
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
