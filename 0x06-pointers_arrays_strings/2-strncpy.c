#include "main.h"
#include <string.h>

/**
 * _strncpy - copy strings
 * @dest:s1
 * @src:s2
 * @n:number
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_src = strlen(src);
	int i;
	
	if (n > len_src)
		n = len_src + 1;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[strlen(dest)] = '\0';
	return (dest);	
}
