#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 * Shell sort algorithm
 * @array: array to sort
 * @size: size of  array to sort
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t index, j, gap = 1;
	int insert;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (index = gap; index < size; index++)
		{
			insert = array[index];
			for (j = index; j >= gap && array[j - gap] > insert; j = j - gap)
				array[j] = array[j - gap];
			array[j] = insert;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
