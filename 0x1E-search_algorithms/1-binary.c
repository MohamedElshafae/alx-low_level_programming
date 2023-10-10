#include "search_algos.h"


void print_arr(int *array, int start, int end);
/**
* binary_search -	function that searches for a value in
* an array of integers using the binary search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1;

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
