#include "main.h"

/**
 * _strspn -  Get the length of the initial substring
 * of the string pointed to by str1 that is made up of
 * only those character contained in the string pointed to by str2
 * @s: String That will be scaned
 * @accept: string containing the characters to match
 * Return: Returns the number of characters in the initial
 * segment of str1 which consist only of characters  from str2.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
		{
			return (c);
		}
	}
	return (c);
}
