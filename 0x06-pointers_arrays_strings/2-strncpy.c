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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[strlen(dest)] = '\0';
	return (dest);
}
