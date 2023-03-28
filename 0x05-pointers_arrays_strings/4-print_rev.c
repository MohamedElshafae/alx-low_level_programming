#include "main.h"
#include <string.h>

/**
 * print_rev - reverse string
 * @s: string variable
 * return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
}
