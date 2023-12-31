#include "sort.h"
/**
 * swap_quick - function that take two pointers and one integer.
 * @array: sorting array.
 * @size: size of array
 * @a: first value address
 * @b: second value address
 *
 */
void swap_quick(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);

	}
}

/**
 * lowmuto_partition - function to partition array.
 * @array: the integer array to sort.
 * @size: the size of array.
 * @low: low index of the sort range.
 * @high: high index of the sort range.
 *
 * Return: return i
 */
size_t lowmuto_partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pivot = array[high];

	for (i = j = low; j < high; j++)
		if (array[j] < pivot)
			swap_quick(array, size, &array[j], &array[i++]);

	swap_quick(array, size, &array[i], &array[high]);

	return (i);

}

/**
 * quicksort - quicksorts via lomuto partitioning scheme
 * @array: the integer array to sort
 * @size: the size of the array
 * @low: the low index of the sort range
 * @high: the high index of the sort range
 *
 */
void quicksort(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t p = lowmuto_partition(array, size, low, high);

		quicksort(array, size, low, p - 1);
		quicksort(array, size, p + 1, high);
	}
}
/**
 * quick_sort - calls quicksort
 * @array: the integer array to sort
 * @size: the size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);

}
