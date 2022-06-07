#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints the word "_putchar"
 * Return: 0 value always
 */
int main(void)
{
	int i;
	char s[] = "_putchar";

	for (i = 0; i < s; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
