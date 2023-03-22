#include "main.h"

/**
 * times_table - Prints the time table.
 */
void times_table(void)
{
	int c, r;

	for (c = 0; c < 10; c++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (r = 1; r < 10; r++)
		{
			if ((r * c) > 9)
			{
				_putchar(((r * c) / (10)) + '0');
				_putchar(((r * c) % (10)) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((r * c) + '0');
			}

			if (r != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
