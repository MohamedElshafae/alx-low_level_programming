#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n : number of intgers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	int i;

	if (separator == NULL)
		return;
	va_start(ptr, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i == (int)(n - 1))
			break;
		printf("%s", separator);
	}
	printf("\n");
}
