#include "main.h"

/**
 *factorial - print factorial of number
 *@n:number
 *Return:factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
