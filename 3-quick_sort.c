#include "sort.h"

/**
* q_sort - quick sort algorithm
* @array: array to sort
* @size: array size
* @o_size: array original size
* @o_array: array original pointer
* Return: always 0
**/
int q_sort(int *array, size_t size, int *o_array, size_t o_size)
{
	size_t i = 0, j = 0;
	int x, pv;

	if (size > 1)
	{
		pv = array[size - 1];

		while (i < size)
		{
			if (array[i] < pv)
			{
				if (array[j] != array[i])
				{
					x = array[i];
					array[i] = array[j];
					array[j] = x;
					print_array(o_array, o_size);
				}
				j++;
			}
			i++;
		}
		if (array[j] != array[size - 1])
		{
			x = array[j];
			array[j] = array[size - 1];
			array[size - 1] = x;
			print_array(o_array, o_size);
		}

		q_sort(array + j, size - j, o_array, o_size);
		if (j)
		{
			q_sort(array, j, o_array, o_size);
		}
	}
	return (0);
}

/**
* quick_sort - quick sort algorithm
* @array: array to sort
* @size: array size
**/
void quick_sort(int *array, size_t size)
{
	if (!size)
		return;

	q_sort(array, size, array, size);
}
