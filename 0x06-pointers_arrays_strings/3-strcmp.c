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
	if (s1 < s2)
		return (-15);
	else if (s1 > s2)
		return (15);
	else
		return (0);
}
