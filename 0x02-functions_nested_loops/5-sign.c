#include "main.h"

/**
 * print_sign - See if the number is < , > or = to zero.
 * @n: The number that will be compared to 0.
 * Return: 1 and + > 0 , 0 and 0 if = 0 , -1 and - if < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
