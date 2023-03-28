#include "main.h"
#include <string.h>

/**
 * puts_half - reverse string
 * @str: string variable
 * return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, start;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;
	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
