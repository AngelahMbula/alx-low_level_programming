#include "print-alphabet.h"
#include <unistd.h>
#include "main.h"

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return;
}
