#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks for lowercase characters
 * @c: character to be checked
 * Return: 1 if successful, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
