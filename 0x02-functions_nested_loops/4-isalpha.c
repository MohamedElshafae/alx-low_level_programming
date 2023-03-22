#include "main.h"

/**
 * _isalpha - Checks if its an alphabetic char or not.
 * @c: Char that will be checked.
 * Return: 1 if its an alphabetic char, and 0 if not.
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
