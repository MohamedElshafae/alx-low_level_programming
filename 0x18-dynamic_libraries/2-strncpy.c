#include "main.h"

/**
 * _strncpy -  Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer.
 * @src: string to be copied.
 * @n: number of char copies.
 * Return: The pointer to the dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
