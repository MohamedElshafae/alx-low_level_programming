#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all parameters or 0 if @n =0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum, i;

	va_start(prt, n);
	sum = 0;
	for (i = 0; i < (int)n; i++)
		sum += va_args(ptr, n);
	va_end(ptr, n);
	return (sum);
}
