#include "sort.h"
/**
 * selection_sort - function that take a pointer and integer
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int min_pos, temp;
	size_t i, j;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{

		for (j = size - 1, min_pos = i + 1; j > i; j--)
			if (array[j] < array[min_pos])
				min_pos = j;
		if (array[i] > array[min_pos])
		{
			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);
		}
	}
}
