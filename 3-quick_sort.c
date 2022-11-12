#include "sort.h"
#include <stdio.h>

/**
 * partition - finds  partition for  quicksort using  Lomuto scheme
 * @array: array to sort
 * @lo: lowest index of  partition to sort
 * @hi: highest index of  partition to sort
 * @size: size of  array
 *
 * Return: index of  partition
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t index, j;
	int swap, pivot;

	pivot = array[hi];
	index = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			index++;
			if (index != j)
			{
				swap = array[index];
				array[index] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[index + 1])
	{
		swap = array[index + 1];
		array[index + 1] = array[hi];
		array[hi] = swap;
		print_array(array, size);
	}
	return (index + 1);
}

/**
 * quicksort - sorts a partition of an array of integers
 * @array: array to sort
 * @lo: lowest index of  partition to sort
 * @hi: highest index of  partition to sort
 * @size: size of  array
 *
 * Return: void
 */
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quicksort(array, lo, pivot - 1, size);
		quicksort(array, pivot + 1, hi, size);

	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using
 * Quick sort algorithm
 * @array:  array to sort
 * @size:  size of  array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
