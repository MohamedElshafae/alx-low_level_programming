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
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[2]) * atoi(argv[1]) + (0 * argc));
	return (0);
}
