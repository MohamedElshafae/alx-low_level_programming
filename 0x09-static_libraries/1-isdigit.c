#include "main.h"

/**
 * _isdigit - Checks if its a digit or not.
 * @c: Char that will be checked.
 * Return: 1 if its a digit char, and 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
