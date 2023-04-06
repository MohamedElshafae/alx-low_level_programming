#include "main.h"

/**
 * _puts_recursion - print string in recursion way
 * @s:string variabl
 * Return:void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
