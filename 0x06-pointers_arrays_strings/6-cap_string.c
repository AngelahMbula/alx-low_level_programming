#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == ' ')
		{
			++1;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
	}
	return (s);
}
