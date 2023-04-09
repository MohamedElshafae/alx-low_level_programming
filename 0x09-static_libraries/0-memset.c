#include "main.h"

/**
 * _memset - Function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: The  string s
 * @b: the char that will be filled with
 * @n: the number of bytes
 * Return: A pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
