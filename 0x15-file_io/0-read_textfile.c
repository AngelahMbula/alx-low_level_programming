#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to posix standard output
 * @filename: pointer to name of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);

	return (w);
}
