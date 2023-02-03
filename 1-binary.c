#include "search_algos.h"

/**
  * binary_search - Performs a search for a value in a sorted array
* of integers using binary search algorithm.
* @array: A pointer to first element of array to be searched.
* @size: number of elements in array.
* @value: value being searched for.
* Returns: -1 if value is not present or array is NULL.
*      Otherwise, returns index where value is located.
* Description: Outputs [sub]array being searched after each
* change during search process.

  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
