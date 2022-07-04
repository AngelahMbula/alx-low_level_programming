#include <stdio.h>

/**
 * main -prints the name of the file it was compiled from
 * Return: value 0 always
 */

int main(void)
{
	printf("%s\n", _BASE_FILE_);
	return (0);
}
