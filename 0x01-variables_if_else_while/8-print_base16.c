#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	char x = '0';

	while (x != 'g')
	{
		putchar(x);
		if (x == '9')
		{
			x = 'a';
			continue;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
