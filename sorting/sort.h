#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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
/*printing tools*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

/*quick sort functions*/
void quick_sort(int *array, size_t size);
void quicksort(int *array, int low, int heigh, size_t size);
int partition(int *array, int low, int high, size_t size);
void swap(int *array, size_t a, size_t b);

/*Cocktail shaker sort functions*/
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t *a, listint_t *b);

#endif
