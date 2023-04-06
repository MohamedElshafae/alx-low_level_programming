#include "main.h"

/**
 * _pow_recursion - print power of number
 * @x:nuber
 * @y:power
 * Return:power of number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
