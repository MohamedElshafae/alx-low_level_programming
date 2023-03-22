#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; c++)
			_putchar(j);
		_putchar('\n');
	}
}
