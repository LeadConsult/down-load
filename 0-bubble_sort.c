#include "sort.h"
#include <stdio.h>


/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of integer to sort
 * @size: size of  array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int index, j;
	int tmp;

	if (size < 2)
		return;

	for (index = 0; index < size; index++)
	{
		for (j = 0; j < size - index - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
