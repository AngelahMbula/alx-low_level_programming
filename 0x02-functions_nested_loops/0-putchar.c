#include "main.h"
#include <unistd.h>

/**
 * main - Prints the word "_putchar"
 * Return: 0 value
 */
int _putchar(char c)

int main(void)
{
	int c = _putchar;

	return (write(1, &c, 1));
	return (0);
}
