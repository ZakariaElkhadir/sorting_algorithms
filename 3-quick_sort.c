#include "sort.h"

void swap(int *array, size_t size, int *a, int *b)
{
    if (*a != *b)
    {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
        print_array((const int *)array, size);

    }
}

size_t lomuto_partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
    int i, j, pivot = array[hi];

    for (i = j = lo; j < hi; j++ )
        if (array[j] < pivot)
            swap(array, size, &array[j], &array[i++]);
    
    swap(array, size, &array[i], &array[hi]);

    return (i);
    
    

}

void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
    if (lo < hi)
    {
        size_t p = lomuto_partition(array, size, lo, hi);

        quicksort(array, size, lo, p - 1);
        quicksort(array, size, p + 1, hi);
    }
}

void quick_sort(int *array, size_t size)
{
    if (!array || !size)
    return;
    quicksort(array, size, 0, size - 1);

}