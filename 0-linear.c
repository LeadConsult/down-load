#include "search_algos.h"

/**
 * linear_search: Searches for a given value in an array of 
 *      integers using Linear Algorithm.
 * @array: A pointer to first element in array to be searched.
 * @size: number of elements in array.
 * @value: value to be searched for.
 * Return: If value is not present or array is NULL, returns -1.

  *
  * Description: Prints a value every time it is compared in array.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
