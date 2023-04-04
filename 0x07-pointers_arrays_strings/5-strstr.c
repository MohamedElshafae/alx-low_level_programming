#include "main.h"
#include <string.h>

/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int len;

	len = strlen(needle);
	while (*haystack != '\0')
	{
		for (i = 0; i < len; i++)
			if (needle[i] != haystack[i])
				break;
		if (i != len)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
