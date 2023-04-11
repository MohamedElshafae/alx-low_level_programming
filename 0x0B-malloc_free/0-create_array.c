#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char
 * @size: size of array
 * @c:the char with initalized
 * Return:ptr of fritst element
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\0';
	return (ptr);
}
