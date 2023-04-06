#include "main.h"
/**
 * is_prime - see if the number is prime or not
 * @a: the number
 * @b: init value
 * Return: 1 if is prime 0 if not
 */
int is_prime(int a, int b)
{
	if (a < 0)
		return (0);
	if (a == 1)
		return (0);
	else if (a == 2)
		return (1);
	else if (a % b == 0)
		return (0);
	else if (b * b > a)
		return (1);
	else
		return (is_prime(a, b + 1));
}

/**
 * is_prime_number - sees if the number is prime or not
 * @n: the number
 * Return: 1 if number is prime 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
