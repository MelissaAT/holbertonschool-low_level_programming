#include "search_algos.h"
/**
 * binary_search - search for a value in a sorted array of integers using
 *                 the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1
 * if value is not present in array
 *         or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	while (start <= end)
	{
		mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			start = mid + 1;
			i = start;
		}
		else
		{
			end  = mid - 1;
			i = start;
		}
	}
	return (-1);
}
