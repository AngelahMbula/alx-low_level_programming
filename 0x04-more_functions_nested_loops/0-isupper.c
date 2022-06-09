#include "main.h"
#include <unistd.h>
/**
 * _isupper - checks for uppercase characters
 * @c: character to be chacked
 * Return: 
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
