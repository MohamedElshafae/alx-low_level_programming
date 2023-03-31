#include "main.h"

/**
 * cap_string -  Capitalizes all words of a string.
 * @c: the string
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == ' ' || c[i] == ',' || c[i] == ';' || c[i] == '.' ||
			c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(' ||
			c[i] == ')' || c[i] == '{' || c[i] == '}')
		{
			if (c[i + 1] > 96 && c[i + 1] < 123)
				c[i + 1] -= 32;
		}
	}

	return (c);
}
