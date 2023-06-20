#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Search for a char in the string
 * @s: The string we search in
 * @c: The char we look for
 * Return: A pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
