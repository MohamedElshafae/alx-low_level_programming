#include "main.h"

/**
 * swap_int - swap values
 * @a: first int
 * @b; secound int
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
