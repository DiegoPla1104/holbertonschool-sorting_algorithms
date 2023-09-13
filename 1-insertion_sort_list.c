#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 * @list: list to sort.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	while (*list != NULL)
	{
		if ((*list)->prev != NULL)
		{
			if ((*list)->prev->n > (*list)->n)
			{
				aux = (*list)->prev;
				(*list)->prev = *list;
				*list = aux;
			}
		}
		*list = (*list)->next;
	}
}
