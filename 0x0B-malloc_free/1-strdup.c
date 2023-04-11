#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * @str: string variable
 * Return: ptr or null if was failed
 */
char *_strdup(char *str)
{
	int i;
	char *ptr = malloc(sizeof(char) * strlen(str) + 1);

	if (ptr == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < (int)strlen(str); i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
