#include "main.h"

/**
 * print_line - print underscores
 * @n: number of _
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('_');
	else
	{
		int i;

		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
