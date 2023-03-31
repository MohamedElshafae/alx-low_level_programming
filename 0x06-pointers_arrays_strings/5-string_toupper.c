#include "main.h"

/**
 * string_toupper - Tske string and return it in upper case
 * @c: The string
 * Return: Uppercase string
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	return (c);
}
