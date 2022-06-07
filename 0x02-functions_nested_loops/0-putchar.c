#include "main.h"
#include <unistd.h>

/**
 * main - Prints the word "_putchar"
 * Return: 0 value
 */
int main(void)
{
	write(1, "_putchar", -1));
	return (0);
}
