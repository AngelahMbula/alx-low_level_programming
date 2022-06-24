#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the c character to stdout
 * @c: character to print
 * Return: on success 1,
 * on errot -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
