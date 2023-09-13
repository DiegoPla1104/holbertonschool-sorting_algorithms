#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 * @list: list to sort.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *current;
	(void)aux;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	current = (*list)->next;
	while (current != NULL)
	{
		aux = current;
		while (aux->prev != NULL && aux->prev->n > aux->n)
		{
			aux->prev->next = aux->next;
			if (aux->next != NULL)
			{
				aux->prev = aux->prev->next;
			}
			aux->next = aux->prev;
			aux->prev = aux->prev->next;
			aux->prev->next = aux;

			if (aux->prev == NULL)
			{
				*list = aux;
			}
			else
			{
				aux->prev->next = aux;
			}
			print_list(*list);
		}
		current = current->next;
	}
}



