#include "main.h"
#include <string.h>

/**
 * _strcpy -  copies the string pointed to by src,
 * @dest: pointer.
 * @src:copy str.
 * Return: The pointer's dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
