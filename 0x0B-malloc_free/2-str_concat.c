#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - conctinate two strings
 * @s1:first string
 * @s2:secound string
 * Return:ptr (s1 + s2)
 */
char *str_concat(char *s1, char *s2)
{
	int len = (int)(strlen(s1) + strlen(s2));
	int i;
	int j = 0;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (int)strlen(s1); i++)
		ptr[i] = s1[i];
	for (i = (int)strlen(s1); i < len; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
