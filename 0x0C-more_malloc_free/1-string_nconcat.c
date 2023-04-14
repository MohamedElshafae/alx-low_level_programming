#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * @s1: first string
 * @s2: second string
 * @n: number of char taken from @s2
 * Return: pointer to the new allocated memory that contains s1 and n of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *ptr;

	if (n >= strlen(s2))
		n = strlen(s2);
	ptr = malloc(strlen(s1) + (int)(n));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1) + n; i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	return (ptr);

}
