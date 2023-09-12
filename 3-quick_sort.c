#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void
swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int
lomuto_partition(int *array, int low, int high)
{
    int pivot = array[high];
    int i = low - 1;
    int j;
    

    for (j = low; j <= high - 1; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void
quick_sort_recursive(int *array, int low, int high)
{
    if (low < high) {
        int pivot_index = lomuto_partition(array, low, high);
        quick_sort_recursive(array, low, pivot_index - 1);
        quick_sort_recursive(array, pivot_index + 1, high);
    }
}

void
quick_sort(int *array, size_t size)
{
    
    if (array == NULL || size <= 1) {
        return;
    }
    quick_sort_recursive(array, 0, size - 1);
}