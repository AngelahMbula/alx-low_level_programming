#include "main.h"
#include <unistd.h>

/**
 * main - Prints the word "_putchar"
 * Return: 0 value
 */
int main(void)
{
	int x;
	int c[] = _putchar();

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
