#include "main.h"

/**
 * _islower - Returns 0 if the char c is lowercase
 * otherwise it returns 1.
 * @c : the char that will be checked.
 * Return: 1 if the char is lowercase and
 * 0 if the char is uppercase.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
