#include "main.h"

/**
 * _abs - Get the absolute number of the given int.
 * @n: The given number.
 * Return: absolute value of n;
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
