#include "main.h"

/**
 * get_square - calculate the square root of number
 * @a: the number
 * @b: init value
 * Return: square root if any
 * 0 if there is no square root
 */
int get_square(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (get_square(a, b + 1));
}

/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (get_square(n, 1));
}
