#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc:the number of argumeent
 * @argv:string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int final = 0;
	int result;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	
	result = atoi(argv[1]);
	while (result != 0)
	{
		if(result > 25)
		{
			final += result / 25;
			result %= 25;
		}
		else if (result > 10)
		{
			final += result / 10;
			result %= 10;
		}
		else if (result > 5)
		{
			final += result / 5;
			result %= 5;
		}
		else if (result > 2)
		{
			final += result / 2;
			result %= 2;
		}
		else
		{
			final += result / 1;
			result %= 1;
		}
	}
	printf ("%d\n", final);
	return (0);
}
