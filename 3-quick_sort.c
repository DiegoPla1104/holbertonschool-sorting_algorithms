#include "sort.h"


void
swap_ints(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int
lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot = array + right, above = left;
	int below;

	for (below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above != below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

void
lomuto_sort(int *array, size_t size, int left, int right)
{
	if (left < right)
	{
		int part = lomuto_partition(array, size, left, right);

		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

void
quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		lomuto_sort(array, size, 0, size - 1);
}
