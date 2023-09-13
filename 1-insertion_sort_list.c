#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *aux;

    while ((*list)->next != NULL)
    {
        if ((*list)->n > (*list)->next->n)
        {
            aux = (*list)->next;
            (*list)->prev = (*list)->next;
            (*list) = aux;
            print_list(*list);
        }
        *list = (*list)->next;
    }
    
}
