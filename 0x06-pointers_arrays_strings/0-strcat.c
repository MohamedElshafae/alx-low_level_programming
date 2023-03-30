#include "main.h"
#include <string.h>

/**
 * _strcat - The strcat function returns a pointer to s1
 * @dest: A pointer to a string that will be modified. s2 will be copied..
 * @src: A pointer to a string that will be appended to the end of s1.
 * Return:The strcat function returns a pointer to s1
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
		dest[len++] += src[i];
	return (dest);
}
