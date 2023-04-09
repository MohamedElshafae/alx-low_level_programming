#include <stdio.h>
#include <stdlib.h>

/**
 * calc - helper funtion
 * @cent: theamount of money
 * Return: the number of changes
 */
int calc(int cent)
{
	int counter = 0;

	while (cent > 0)
	{
		if ((cent / 25) > 0)
		{
			counter += cent / 25;
			cent %= 25;
		}
		else if ((cent / 10) > 0)
		{
			counter += cent / 10;
			cent %= 10;
		}
		else if ((cent / 5) > 0)
		{
			counter += cent / 5;
			cent %= 5;
		}
		else if ((cent / 2) > 0)
		{
			counter += cent / 2;
			cent %= 2;
		}
		else
		{
			counter += cent;
			cent = 0;
		}
	}
	return (counter);
}

/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of args
 * @argv: array of args
 * Return: 1 if there is more than 1 arg 0 otherwise
 */
int main(int argc, char *argv[])
{
	int cent, counter;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	cent = atoi(argv[1]);
	counter = calc(cent);

	printf("%d\n", counter);
	return (0);
}
