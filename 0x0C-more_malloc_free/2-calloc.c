#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: number of array element
 * @size: size of each element
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = 0;
	return (ptr);
}
