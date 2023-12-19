#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap(listint_t *a, listint_t *b);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void quicksort(int *array, size_t size, ssize_t low, ssize_t high);
size_t lowmuto_partition(int *array, size_t size, ssize_t low, ssize_t high);
/*void swap(int *array, size_t size, int *a, int *b);*/
void swap_quick(int *array, size_t size, int *a, int *b);
#endif
