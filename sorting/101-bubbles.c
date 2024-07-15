#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the bubble sort algorithm.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 *
 */
void cocktail_sort_list(int *array, size_t size)
{
	size_t j, swap = 1, temp;

	if (size < 2 || !array)
		return;

	while (swap)
	{
		swap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;																					                           print_array(array, size);
				swap = 1;
			}
		}
	}
}
