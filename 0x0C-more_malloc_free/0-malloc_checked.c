#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check if the malloc done successfully
 * @b: size to allocate
 * Return: void pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);
	
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
