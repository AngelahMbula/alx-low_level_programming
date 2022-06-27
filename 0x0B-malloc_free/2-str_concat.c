#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat_str = malloc(sizeof(char) * 12);
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_str[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		concat_str[i] = s2[j];
	concat_str[i] = '\0';
	return (concat_str);
}
