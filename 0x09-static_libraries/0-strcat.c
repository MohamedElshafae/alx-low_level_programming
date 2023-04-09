#include "main.h"
#include "string.h"

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * @dest: first string.
 * @str: second string.
 * Return: returns the new string.
 */
char *_strcat(char *dest, char *src)
{
	int len1 = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len1++] = src[i];


	return (dest);

}
