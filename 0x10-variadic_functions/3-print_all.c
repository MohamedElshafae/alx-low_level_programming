#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, len;
	char *str;
	char *sep = ", ";

	i = 0;
	len = 0;

	while (format && format[len])
		len++;
	va_start(ap, format);
	while (format && format[i])
	{
		if (i == len - 1)
			sep = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), sep);
				break;
			case 's':
				str = va_arg(ap, char *);
				printf("%s%s", str ? str : "(nil)", sep);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
