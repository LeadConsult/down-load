#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * partition - finds  partition for  quicksort using  Hoare scheme
 * @array: array to sort
 * @lo: lowest index of  partition to sort
 * @hi: highest index of  partition to sort
 * @size: size of  array
 *
 * Return: index of  partition
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	int swap, pivot;

	pivot = array[hi];
	while (lo <= hi)
	{
		while (array[lo] < pivot)
			lo++;
		while (array[hi] > pivot)
			hi--;
		if (lo <= hi)
		{
			if (lo != hi)
			{
				swap = array[lo];
				array[lo] = array[hi];
				array[hi] = swap;
				print_array(array, size);
			}
			lo++;
			hi--;
		}
	}
	return (hi);
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
		quicksort(array, lo, pivot, size);
		quicksort(array, pivot + 1, hi, size);

	}
}

/**
 * quick_sort_hoare - sorts an array of integers in ascending order using
 * Quick sort algorithm
 * @array:  array to sort
 * @size:  size of  array
 *
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
