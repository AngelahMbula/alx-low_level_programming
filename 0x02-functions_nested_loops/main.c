#include "main.h"
#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet( )
{
	int n = 0;

	for (int n = 'a'; n <= 'z'; n++)
	putchar(n);
	putchar('\n');
	return;
}
