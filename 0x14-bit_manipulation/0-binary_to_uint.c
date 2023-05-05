#include "main.h"
/**
 * _pow - power
 * @x: base
 * @y: power
 * Return: x power y
 */
int _pow(int x, int y)
{
	int i, sum = 0;

	for (i = 0; i < y; i++)
		sum *= x;
	return (sum);
}
/**
 * binary_to_uint - convert a binary to unsigned int
 * @b: string contains 0's and 1's
 * Return: unsigned int of binary
*/
unsigned int binary_to_uint(const char *b)
{
	int digit, index, total = 0;

	if (!b)
		return (0);
	index = (strlen(b) - 1);
	while (*b)
	{
		digit = (*b) - '0';
		if (digit == 0 || digit == 1)
		{
			total += (_pow(2, index)) * digit;
			index--;
			b++;
		}
		else
		{
			return (0);
		}
	}
	return ((unsigned int) total);
}
