#include <stdlib.h>
#include <stdio.h>

/*
 * main - Entry point takes no arguments
 * Return: 0 value always
 */
int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar("\n");

	return (0);
