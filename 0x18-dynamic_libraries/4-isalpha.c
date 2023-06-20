#include "main.h"

/**
 * _isalpha - Checks if its an alphabetic char or not.
 * @c: Char that will be checked.
 * Return: 1 if its an alphabetic char, and 0 if not.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);

	return (0);
}
