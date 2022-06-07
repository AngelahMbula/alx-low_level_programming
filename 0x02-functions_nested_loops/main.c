#include "main.h"
#include <unistd.h>


int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int n = 0;

	putchar(n);
	putchar('\n');
	return;
}
