#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * Selection sort algorithm
 * @array:  array to sort
 * @size:  size of  array
 */
void selection_sort(int *array, size_t size)
{
	size_t index, j, min;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (index = 0; index < size - 1; index++)
	{
		min = index;
		for (j = index + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (index != min)
		{
			swap = array[index];
			array[index] = array[min];
			array[min] = swap;
			print_array(array, size);
		}
	}
}
