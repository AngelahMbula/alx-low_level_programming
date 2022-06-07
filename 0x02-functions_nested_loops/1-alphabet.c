#include "main.h"
#include <unistd.h>

/**
 *print_alphabets - prints alphabet, lowercase
 *Return: void
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
