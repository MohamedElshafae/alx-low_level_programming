#include "main.h"

/**
 * _memcpy - Function copies n bytes from memory area src to memory area dest
 * @dest: Destnation string
 * @src: The string that will be copied from
 * @n: Number of byted that will be copied
 * Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	       dest[i] = src[i];

	return (dest);
}
