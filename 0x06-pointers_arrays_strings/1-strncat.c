#include "main.h"
#include <string.h>

/**
 * _strncat - append string by n
 * @dest: s1
 * @src: s2
 * @n: number
 * Return: ptr that appended
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = strlen(dest);
	int len_src = strlen(src);
	int i;

	if (n > len_src)
		n = len_src;
	for (i = 0; i < n; i++)
		dest[len_dest++] = src[i];
	return (dest);
}
