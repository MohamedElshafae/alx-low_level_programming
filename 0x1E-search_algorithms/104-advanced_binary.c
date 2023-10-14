#include "search_algos.h"


void print_arr(int *array, int start, int end);
int binary_recurtion(int *array, int left, int right, int value);
/**
* advanced_binary -	function that searches for a value in
* an array of integers using the advanced binary search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_recurtion(array, 0, (int)size - 1, value));
}

/**
* binary_recurtion - function that searches for a value in
* an array of integers using the binary search algorithm in recursion way
* @array: array of integers
* @left: start of an array
* @right: end of array of an array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/

int binary_recurtion(int *array, int left, int right, int value)
{
	int mid = (left + right) / 2;

	printf("Searching in array: ");
	print_arr(array, left, right);
	if (left >= right)
		return (-1);
	if (array[mid] == value)
	{
		if (array[mid - 1] != value)
			return (mid);
		else
			return (binary_recurtion(array, left--, mid, value));
	}
	else if (value < array[mid])
		return (binary_recurtion(array, left, mid - 1, value));
	else
		return (binary_recurtion(array, mid + 1, right, value));
}

/**
* print_arr - print array from start and end
* @array: array of integers
* @start: start index of array
* @end: end index of array
*/
void print_arr(int *array, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}
