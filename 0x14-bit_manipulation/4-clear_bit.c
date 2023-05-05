#include "main.h"

/**
 * clear_bit - clear the value of a bit at given index
 * @n: a pointer to unsigned long int number
 * @index: index
 * Return: 1 if it works otherwise 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
