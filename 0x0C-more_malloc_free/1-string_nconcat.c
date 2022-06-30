#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char  *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int length = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length] != '\0')
	{
		length++;
	}
	s = malloc(sizeof(char) * (j + n + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; s1[j]; j++)
	{
		s[length++] = s1[j];
	}
	for (j = 0; s2[j] && j < n; j++)
	{
		s[length++] = s2[j];
	}
	s[length] = '\0';
	return (s);
}
