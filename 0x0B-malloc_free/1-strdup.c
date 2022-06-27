#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: given string
 * Return: a pointer to the duplicated string on success,
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate;

	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	duplicate = malloc(sizeof(char) * (i + 1));
	if (duplicate == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		duplicate[j] = str[j];
		j++;
	}
	return (duplicate);
}
