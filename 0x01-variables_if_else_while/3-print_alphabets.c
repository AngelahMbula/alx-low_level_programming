#include <stdlib.h>
#include <stdio.h>

/*
 * main - takes no arguments entry point
 * Return: 0 value always
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
