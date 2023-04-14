#include <stdlib.h>
#include "main.h"

/**
 * array_range - created array the array values from min
 * (included) to max (included), ordered from min to max
 * @min: min of array
 * @max: max of array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 4);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
