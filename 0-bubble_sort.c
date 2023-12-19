#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using the bubble sort algorithm.
 *
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	bool swapped;

	if (!array || !size)
		return;

	do {
		swapped = false;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = true;
			}
		}
		i++;

	} while (swapped);
}
