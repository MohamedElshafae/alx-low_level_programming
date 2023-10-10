#include "search_algos.h"

/**
* linear_search -	function that searches for a value in
* an array of integers using the Linear search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int linear_search(int *array, size_t size, int value)
{
	int index;

	for (index = 0; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
