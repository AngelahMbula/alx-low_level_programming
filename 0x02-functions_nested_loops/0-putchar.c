#include "main.h"
#include <unistd.h>

/**
 * main - Prints the word "_putchar"
 * Return: 0 value
 */
int main(void)
{
	char c = _putchar;

	return (write(1, &c, 1));
	return (0);
}
