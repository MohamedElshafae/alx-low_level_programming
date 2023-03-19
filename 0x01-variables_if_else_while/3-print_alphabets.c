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
	char x = 'a';

	while (x != '[')
	{
		putchar(x);
		x++;
		if (x == '{')
			x = 'A';
	}
	putchar('\n');
	return (0);
}
