#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - strings, followed by a new line.
 * @separator:  string to be printed between the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("%s", "(nil)");
		printf("%s", str);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
