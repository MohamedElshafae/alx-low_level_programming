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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] < '9' && argv[i][0] > '0')
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}	
	printf("%d\n", sum);
	return (0);
}
