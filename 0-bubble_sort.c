#include "sort.h"

/**
*bubble_sort - Sorts an array
*@array: Array to be sorted
*@size: Size of the array
*
*/
void bubble_sort(int *array, size_t size)
{
	int i, j, aux;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = 0;
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
