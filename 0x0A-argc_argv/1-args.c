#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 * @argc:the number of argumeent
 * @argv:string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", (int)  ((argc - 1) + (strlen(*argv) * 0)));
	return (0);
}
