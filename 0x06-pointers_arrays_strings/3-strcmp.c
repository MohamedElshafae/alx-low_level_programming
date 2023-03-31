#include "main.h"
#include <string.h>

/**
 * _strcmp - compare with two string
 * @s1: string 1
 * @s2: string 2
 * Return: 15 or -15 or -1
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
