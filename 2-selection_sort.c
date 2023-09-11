#include "sort.h"

/**
*selection_sort - Sorts an array
*@array: Array to be sorted
*@size: Size of the array
*
*/
void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, aux, temp;

	for (i = 0; i < size; i++)
	{
		aux = i;
		temp = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[aux])
			{
				aux = j;
			}
		}
		if (aux != i)
		{
			temp = array[i];
			array[i] = array[aux];
			array[aux] = temp;
			print_array(array, size);

		}
	}
}
