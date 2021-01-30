#include "sort.h"

/**
* insertion_sort_list - insertion sort function
* @list: list to sort
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *myList = *list;

	current = *list;

	next = (*current).next;

	while (next != NULL)
	{
		while ((*current).n > (*next).n)
		{
			/*Separar nodo*/
			(*current).next = (*next).next;
			if ((*next).next != NULL)
			{
				(*(*current).next).prev = current;
			}
			(*next).next = NULL;
			(*next).prev = NULL;
			if ((*current).prev == NULL)
			{
				(*next).prev = (*current).prev;
				(*next).next = current;
				(*current).prev = next;
				current = next;
				next = (*current).next;
			}
			else
			{
				current = (*current).prev;
				(*(*current).next).prev = next;
				(*next).next = (*current).next;
				(*current).next = next;
				(*next).prev = current;
			}
			print_list(myList);
		}
		current = (*current).next;
		next = (*current).next;
	}
}

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next;

	current = *list;
	next = (*current).next;

	while (next != NULL)
	{
		while ((*current).n > (*next).n)
		{
			/*Separar nodo*/
			(*current).next = (*next).next;
			if ((*next).next != NULL)
			{
				(*(*current).next).prev = current;
			}
			(*next).next = NULL;
			(*next).prev = NULL;
			if ((*current).prev == NULL)
			{
				(*next).prev = (*current).prev;
				(*next).next = current;
				(*current).prev = next;
				current = next;
				next = (*current).next;
			}
			else
			{
				current = (*current).prev;
				(*(*current).next).prev = next;
				(*next).next = (*current).next;
				(*current).next = next;
				(*next).prev = current;
			}
		}
		current = (*current).next;
		next = (*current).next;
	}
}