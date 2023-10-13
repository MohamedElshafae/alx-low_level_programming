#include "search_algos.h"

int binary(int *array, int value, int left, int right);
void print_arr(int *array, int start, int end);
/**
* exponential_search -	function that searches for a value in
* an array of integers using the exponential search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int exponential_search(int *array, size_t size, int value)
{
	int index, prev;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	for (index = 1; index <= (int)size; index = index * 2)
	{
		if (value <= array[index])
			break;
		prev = index;
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
	}
	if (index >= (int)size)
		index = (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	return (binary(array, value, prev, index));
}
/**
* binary -	function that searches for a value in
* an array of integers using the binary search algorithm
* @array: array of integers
* @left: start of an array
* @right: end of an array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int binary(int *array, int value, int left, int right)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: ");
		print_arr(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (value <= array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
	}
	return (-1);
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
