#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 *print_alphabet - prints alphabet, lowercase
 *Return: void
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
}
